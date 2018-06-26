#include <iostream>
#include <fstream>
#include <sstream>


#include "src/matrix.h"

using namespace std;


int main() {

    std::cout << "Matrix program" << std::endl;

    Matrix mat({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, 3, 4);
    Matrix mat2 = mat;
    mat.view();


//    cout << mat << endl;


//    size_t k=1;
//    for(size_t i{}; i != 3; ++ i){
//        for(size_t j{}; j != 4;++ j){
//            mat[i][j] = k++;
//        }
//    }
//    cout << mat[2][2] << endl;
//    mat.view();

//    vector<int> vec{2, 3,4};
//    for(size_t i{}; i != vec.size(); ++i){
//        cout << "[" << i << "] " << vec[i] << endl;
//    }

//    vector<vector<int>> vvec;
//    vvec.push_back(vector<int>{1 ,2, 3});
//    vvec.push_back(vector<int>{10, 3, 4, 5});
//    vvec.push_back(vector<int>{100 ,2});
//    for(vector<int>  vout: vvec){
//        for(int vin: vout){
//            cout << vin << ",";
//        }
//        cout << endl;
//    }

    int i{1};
    while(++i && i != 10000000);

    cout << "Program ended. Time elapsed " << (clock() - clock_t()) / double(CLOCKS_PER_SEC) << " sec" << endl; // todo your task
    return 0;
}
