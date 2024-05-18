#include <iostream>
using namespace std;
const int MAX = 100;

void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> rows >> cols;

    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element for row " << i+1 << " and column " << j+1 << ": ";
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element for row " << i+1 << " and column " << j+1 << ": ";
            cin >> mat2[i][j];
        }
    }

    addMatrices(mat1, mat2, result, rows, cols);

    cout << "Resultant matrix after addition:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
