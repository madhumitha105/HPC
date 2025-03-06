//#######################################################
//Code: to add matrices of size 8*8 without parallelism
//Author: Madhumitha R
//Reg No: 24011501011
//Class: MTech 1st Year
//University: Shiv Nadar University
//#######################################################
#include <iostream>
using namespace std;

int main() {
    // Define the size of the matrices
    const int SIZE = 8;

    // Declare and initialize two 8x8 matrices
    int matrix1[SIZE][SIZE] = {
        {1, 2, 3, 4, 5, 6, 7, 8},
        {9, 10, 11, 12, 13, 14, 15, 16},
        {17, 18, 19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30, 31, 32},
        {33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48},
        {49, 50, 51, 52, 53, 54, 55, 56},
        {57, 58, 59, 60, 61, 62, 63, 64}
    };

    int matrix2[SIZE][SIZE] = {
        {64, 63, 62, 61, 60, 59, 58, 57},
        {56, 55, 54, 53, 52, 51, 50, 49},
        {48, 47, 46, 45, 44, 43, 42, 41},
        {40, 39, 38, 37, 36, 35, 34, 33},
        {32, 31, 30, 29, 28, 27, 26, 25},
        {24, 23, 22, 21, 20, 19, 18, 17},
        {16, 15, 14, 13, 12, 11, 10, 9},
        {8, 7, 6, 5, 4, 3, 2, 1}
    };

    // Declare a matrix to store the result of the addition
    int result[SIZE][SIZE];

    // Perform the matrix addition
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Output the result
    cout << "Resultant Matrix (Matrix1 + Matrix2):" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

