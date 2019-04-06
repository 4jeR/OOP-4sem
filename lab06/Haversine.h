#ifndef H_COORDINATE_
#define H_COORDINATE_

#include <iostream> 
#include <cmath> 

////////////////////////////////////////////////////////////////////////
//
// distance between latitudes and longitudes  
double Haversine(double lon1, double lat1, double lon2, double lat2);

////////////////////////////////////////////////////////////////////////
//
class PointedDistance {
  private:
    float m_distance;        // in [m]
    std::string m_direction; // South, North, East, West
  public:
    PointedDistance() = default;
    PointedDistance(float distance, std::string direction)
      : m_distance(distance),m_direction(direction){}
    ~PointedDistance() = default;  
    float Value() const {return m_distance;}
    std::string Direction() const {return m_direction;}
};

////////////////////////////////////////////////////////////////////////
//
class Coordinate {
  private:
    float m_longitude;
    float m_latitude;
  public:
    Coordinate() = default;   
    Coordinate(float longitude, float latitude)
      : m_longitude(longitude), m_latitude(latitude){}
    Coordinate(const Coordinate& coord){
        m_longitude = coord.Longitude();
        m_latitude = coord.Latitude();
    }  
    ~Coordinate() = default;

    float Latitude()const{return m_latitude;}
    float Longitude()const{return m_longitude;}
    void Latitude(float var){ m_latitude = var;}
    void Longitude(float var){ m_longitude = var;}

    void MoveInDirection(double xx_dinstance, std::string direction);
    //
    Coordinate& operator+=(const PointedDistance& pd);
};

/**
 * @class Distance
 * @brief       klasa opisujaca dystans pomiedzy dwoma punktami geograficznymi
*/
class Distance{
public:
    /**
     * @fn Distance
     * @brief                 konstruktor 
     * @param Coordinate&     c1 - pierwsze wspolrzedne
     * @param Coordinate&     c2 - drugie wspolrzedne
    */
    Distance(const Coordinate& c1, const Coordinate& c2);

     /**
     * @fn Distance
     * @brief                 konstruktor 
     * @param float           long1 - dlugosc geogr. 1
     * @param float           lat1 - szerokosc geogr. 1
     * @param float           long2 - dlugosc geogr. 2
     * @param float           lat2 - szerokosc geogr. 2
    */
    Distance(float long1, float lat1, float long2, float lat2);

    /**
     * @fn Value  
     * @brief             metoda obliczajaca odleglosc miedzy dwoma punktami geograficznymi
     * @return float      dystans pomiedzy dwoma punktami
    */
    float Value()const;
private:
    Coordinate m_cord1; ///< wspolrzedne pierwszego punktu geograficznego
    Coordinate m_cord2; ///< wspolrzedne drugiego punktu geograficznego
};


#endif // H_COORDINATE_