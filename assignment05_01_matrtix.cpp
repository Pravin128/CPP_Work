#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Matrix {
private:
    int row;
    int col;
    vector<std::vector<int>> data;

public:
    Matrix(int r, int c) : row(r), col(c) {
        data.resize(r, vector<int>(c, 0));
    }

    void readMatrix() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << "Enter the value at row " << i << " column " << j << ": ";
                if (!(cin >> data[i][j])) {
                    throw runtime_error("Invalid input. Please enter an integer.");
                }
            }
        }
    }

    void displayMatrix() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(const Matrix& other) {
        if (row != other.row || col != other.col) {
            throw runtime_error("Matrix addition requires matrices of the same size.");
        }

        Matrix result(row, col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    Matrix operator-(const Matrix& other) {
        if (row != other.row || col != other.col) {
            throw runtime_error("Matrix subtraction requires matrices of the same size.");
        }

        Matrix result(row, col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& other) {
        if (col != other.row) {
            throw runtime_error("Matrix multiplication requires the number of columns in the first matrix to be equal to the number of rows in the second matrix.");
        }

        Matrix result(row, other.col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < other.col; j++) {
                for (int k = 0; k < col; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    int r1, c1, r2, c2;

    cout << "Enter the dimensions of the first matrix (rows columns): ";
    cin >> r1 >> c1;

    Matrix matrix1(r1, c1);
    matrix1.readMatrix();

    cout << "Enter the dimensions of the second matrix (rows columns): ";
    cin >> r2 >> c2;

    Matrix matrix2(r2, c2);
    matrix2.readMatrix();

    try {
        Matrix sum = matrix1 + matrix2;
        cout << "Matrix Sum:\n";
        sum.displayMatrix();
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    try {
        Matrix difference = matrix1 - matrix2;
        cout << "Matrix Difference:\n";
        difference.displayMatrix();
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    try {
        Matrix product = matrix1 * matrix2;
        cout << "Matrix Product:\n";
        product.displayMatrix();
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
/*Certainly, let me explain the code step by step.

1. **Matrix Class Definition**:

    - We start by defining a `Matrix` class, which represents a matrix as an Abstract Data Type (ADT).
    - The class has private member variables `rows` and `columns` to store the dimensions of the matrix,
     and a 2D vector `data` to store the matrix elements.

2. **Constructor**:

    - The constructor of the `Matrix` class takes the number of rows and columns as parameters and 
    initializes the data vector with the specified dimensions, initializing all elements to 0.

3. **readMatrix Function**:

    - The `readMatrix` function is used to input values into the matrix.
    - It uses nested loops to iterate through each element of the matrix and prompts the user to enter values.
    - Input validation is performed to ensure that the user enters integers. 
        If a non-integer value is entered, a runtime exception is raised.

4. **displayMatrix Function**:

    - The `displayMatrix` function is used to print the contents of the matrix to the console.
    - It uses nested loops to iterate through the matrix and prints each element.

5. **Matrix Operations (addition, subtraction, multiplication)**:

    - Overloaded operators (`+`, `-`, `*`) are defined for the `Matrix` class to perform matrix addition, subtraction, and multiplication.
    - Each operator checks whether the dimensions of the two matrices involved in the operation are compatible. If not, a runtime exception is raised.
    - The operators perform the corresponding matrix operation and return a new `Matrix` object as the result.

6. **Main Function**:

    - In the `main` function, we begin by asking the user to input the dimensions of two matrices (`matrix1` and `matrix2`) and their respective values.

    - We then attempt to perform the matrix operations:

        - Matrix addition (`matrix1 + matrix2`)
        - Matrix subtraction (`matrix1 - matrix2`)
        - Matrix multiplication (`matrix1 * matrix2`)

    - Each operation is enclosed in a `try` block to catch exceptions. If any exceptions are thrown during the operations (e.g., due to invalid input or dimension mismatches), an error message is displayed.

This code demonstrates how to create a simple `Matrix` class, perform basic input validation, and carry out matrix operations while handling exceptions to ensure the program doesn't crash when errors occur.*/