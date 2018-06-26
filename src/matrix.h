//
// Created by Ultron on 05-Jan-18.
//

#include <vector>
#include <cstddef>

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H



/**
 *
 */
class Matrix{

    std::vector<std::vector<double>> _elements;
    size_t _row;
    size_t _col; // column

public:

    ~Matrix() = default;    // destructor
    Matrix(const Matrix&) = default;  // copy constructor
    Matrix(Matrix&&) = default;// move constructor
    Matrix& operator=(const Matrix&) = default; // copy assignment
    Matrix& operator=(Matrix&&) = default;  // move assignment
    Matrix(size_t row, size_t col); // constructor
    Matrix(const std::initializer_list<double>& lst, size_t row, size_t column);  // initializer list costructor

    size_t row() const { return _row;}
    size_t column() const { return _col;}

    std::vector<double>& operator[](size_t i){  // this is it
        std::cout << "entry => operator[](size_t) : line " << __LINE__ << std::endl;
        return _elements[i];
    }

//    const std::vector<double>& operator[](size_t i)const{
//        std::cout << "entry => operator[](size_t) const : line " << __LINE__ << std::endl;
//        return _elements[i];
//    }

    void view();

    friend std::ostream& operator<<(std::ostream& os, const Matrix& mat);

    std::ostream& getstream(std::ostream& os, const Matrix& mat);

};



// matrix algebra

Matrix& add(const Matrix& matA, const Matrix& matB);
Matrix& subtract(const Matrix& matA, const Matrix& matB);
Matrix& dot(const Matrix& matA, const Matrix& matB);


#endif //MATRIX_MATRIX_H
