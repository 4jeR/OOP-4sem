#pragma once
#include <iostream>

template <typename T, int r, int c>
class Matrix{
public:
    Matrix();

    void reset(const T& value);

    template <int i, int j>
    T& at();

    T& At(int i, int j);

    template <typename T2>
    void add(Matrix<T2, r, c>& mat);

    template <typename Type, int R, int C>
    friend std::ostream& operator<< (std::ostream& stream, const Matrix<Type, R, C>& matrix);

private:
    T m_data[r][c];
};


template <typename Type, int R, int C>
std::ostream& operator<< (std::ostream& stream, const Matrix<Type, R, C>& matrix){
    
    for(int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            stream << matrix.m_data[j][i] << " ";
        }
        stream << std::endl;
    }
    
    return stream;
}


template <typename T,int r, int c>
template <typename T2>
void Matrix<T, r, c>::add(Matrix<T2, r, c>& mat){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            m_data[i][j] += mat.At(i,j);
        }
    }
}


template <typename T,int r, int c>
T& Matrix<T, r, c>::At(int i, int j){
    return m_data[i][j];
}

template <typename T,int r, int c>
template <int i, int j>
T& Matrix<T, r ,c >::at(){
    return At(i,j);
}

template <typename T,int r, int c>
void Matrix<T, r, c>::reset(const T& value){
    for(int i = 0; i < r; i++){
        for(int j = 0 ; j<c ; j++){
            m_data[i][j] = value;
        }
    }
}


template <typename T,int r, int c>
Matrix<T, r, c>::Matrix(){
    for(int i = 0;i < r; i ++){
        for(int j = 0 ; j<c ; j++){
            m_data[i][j] = 0;
        }
    }
}