#include "Haversine.h"
////////////////////////////////////////////////////////////////////////
//
void Coordinate::MoveInDirection(double xx_dinstance, std::string direction){


    int equator_circumference=6371000;
    int polar_circumference=6356800;

    double m_per_deg_long =  360. / polar_circumference;
    double rad_lat=(Latitude() * (M_PI) / 180);
    double m_per_deg_lat = 360 / ( cos(rad_lat) * equator_circumference);

    double deg_diff_long = xx_dinstance * m_per_deg_long;
    double deg_diff_lat  = xx_dinstance * m_per_deg_lat; 


    double xx_north_lat = Latitude() + deg_diff_long;
    double xx_north_long= Longitude();
    double xx_south_lat = Latitude() - deg_diff_long;
    double xx_south_long= Longitude();

    double xx_east_lat = Latitude();
    double xx_east_long= Longitude() + deg_diff_lat;  
    double xx_west_lat = Latitude();
    double xx_west_long= Longitude() - deg_diff_lat;

    if (direction.compare("North")==0) {
        Latitude(xx_north_lat);
        Longitude(xx_north_long);
    } else if (direction.compare("South")==0){
        Latitude(xx_south_lat);
        Longitude(xx_south_long);
    } else if (direction.compare("East")==0){
        Latitude(xx_east_lat);
        Longitude(xx_east_long);
    } else if (direction.compare("West")==0){
        Latitude(xx_west_lat);
        Longitude(xx_west_long);
    }
}

////////////////////////////////////////////////////////////////////////
//
// distance between latitudes and longitudes  
double Haversine(double lon1, double lat1, double lon2, double lat2){ 
         
        double dLat = (lat2 - lat1) * 
                      M_PI / 180.0; 
        double dLon = (lon2 - lon1) *  
                      M_PI / 180.0; 
  
        // convert to radians 
        lat1 = (lat1) * M_PI / 180.0; 
        lat2 = (lat2) * M_PI / 180.0; 
  
        // apply formulae 
        double a = pow(sin(dLat / 2), 2) +  
                   pow(sin(dLon / 2), 2) *  
                   cos(lat1) * cos(lat2); 
        double rad = 6371; 
        double c = 2 * asin(sqrt(a)); 
        return rad * c; 
    }

Coordinate& Coordinate::operator+=(const PointedDistance& pd){
    MoveInDirection(pd.Value(), pd.Direction());
    return *this;
}


Distance::Distance(const Coordinate& c1, const Coordinate& c2)
:m_cord1(c1), m_cord2(c2)
{}



Distance::Distance(float long1, float lat1, float long2, float lat2){
    m_cord1.Longitude(long1);
    m_cord1.Latitude(lat1);
    m_cord2.Longitude(long2);
    m_cord2.Latitude(lat2);
}


float Distance::Value()const{
    return Haversine(m_cord1.Longitude(),m_cord1.Latitude(),m_cord2.Longitude(),m_cord2.Latitude());
}