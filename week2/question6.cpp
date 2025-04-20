#include <iostream>
using namespace std;

const int SIZE = 3;

void inputMatrix(int matrix[SIZE][SIZE], const string& name) {
    cout << "Enter elements of " << name << " matrix (3x3):\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void addMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void transposeMatrix(int matrix[SIZE][SIZE], int transpose[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE];
    int sumOriginal[SIZE][SIZE];
    int trans1[SIZE][SIZE], trans2[SIZE][SIZE], sumTranspose[SIZE][SIZE];
    
    inputMatrix(mat1, "first");
    inputMatrix(mat2, "second");

    addMatrices(mat1, mat2, sumOriginal);
    cout << "\nSum of the original matrices:\n";
    displayMatrix(sumOriginal);

    transposeMatrix(mat1, trans1);
    transposeMatrix(mat2, trans2);

    cout << "\nTranspose of first matrix:\n";
    displayMatrix(trans1);

    cout << "\nTranspose of second matrix:\n";
    displayMatrix(trans2);

    addMatrices(trans1, trans2, sumTranspose);
    cout << "\nSum of the transposed matrices:\n";
    displayMatrix(sumTranspose);

    return 0;
}
