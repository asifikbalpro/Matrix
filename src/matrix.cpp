//
// Created by Ultron on 05-Jan-18.
//

#include <iostream>
#include "matrix.h"

using namespace std;    // don't use using namespace std in a header file


/**
 *
 * @param row
 * @param col
 */
Matrix::Matrix(size_t row, size_t col) {
    cout << "entry => Matrix(size_t, size_t) : line " << __LINE__ << endl;
//    clock_t t_start = clock();
    _row = row;
    _col = col;
    _elements = vector<vector<double>>(row);
    for(size_t i{} ; i != row; ++ i){
        _elements[i] = vector<double>(col);
    }
    cout << "exiting => Matrix(size_t, size_t) : line " << __LINE__ << endl;
}

/**
 *
 */
void Matrix::view() {
    cout << "entry => view() : line " << __LINE__ << endl;
    cout << "Viewing matrix" << endl;
    for(size_t i{} ; i != _row; ++i){
            for(size_t j{}; j != _col;++j){
                cout << _elements[i][j] << '\t';
            }
        cout << endl;
    };

}


/**
 *
 * @param os
 * @param mat
 * @return
 */
ostream& operator<<(ostream& os, const Matrix& mat) {
    os << '{';
    for (size_t i{}; i != mat._row; ++i) {
        if(i!=0)
            os << " {";
        else
            os << '{';
        for (size_t j{}; j != mat._col; ++j) {
            os << mat._elements[i][j] << ',';
        }
        if(i != mat._row-1) {
            os << '}' << endl;
        }
        else {
            os << '}';
        }

    };
    os << '}';
    return os;
}


/**
 *
 * @param os
 * @param mat
 * @return
 */
//ostream& Matrix::getstream(ostream& os, const Matrix& mat) {
//    os << '{';
//    for (size_t i{}; i != mat._row; ++i) {
//        if(i!=0)
//            os << " {";
//        else
//            os << '{';
//        for (size_t j{}; j != mat._col; ++j) {
//            os << mat._elements[i][j] << ',';
//        }
//        if(i != mat._row-1) {
//            os << '}' << endl;
//        }
//        else {
//            os << '}';
//        }
//
//    };
//    os << '}';
//    return os;
//}

/**
 *
 * @param lst
 * @param row
 * @param column
 */
Matrix::Matrix(const initializer_list<double> &lst, size_t row, size_t column) {
    cout << "entry => Matrix(initializer_list, size_t, size_t) : line " << __LINE__ << endl;
    if(lst.size() != row*column){
        cerr << "Size mismatched! : line " << __LINE__ << endl;
        cout << "Exitiing the program : line " << __LINE__ << endl;
        exit(1);
    }
    // othersise
    _row = row;
    _col = column;
    _elements = vector<vector<double>>(row);
    initializer_list<double>::iterator it = lst.begin();
    for(size_t i{} ; i != row; ++ i){
        _elements[i] = vector<double>(_col);
        for(size_t j{}; j != _col; ++j){
            _elements[i][j] = *it;
            ++it;
        }
    }
    cout << "exiting => Matrix(initializer_list, size_t, size_t) : line " << __LINE__ << endl;
};


/***********************************************************
* Algebric function
***************************************************/
/**
 * Matrix multiplication method
 * @param matA
 * @param matB
 * @return  : product of matA and matB
 */
Matrix& dot(const Matrix& matA, const Matrix& matB){


}