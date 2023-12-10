#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;
class Matrix
{
public:
    int row, col;
    vector<std::vector<int>> mat;
    Matrix(int row, int col) : row(row), col(col), mat(row, vector<int>(col, 0)) {}
    
    void readMatrix()
    {
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout << "Enter element for row " << i + 1 << " and column " << j + 1 << ": ";
                if (!(cin >> mat[i][j]))
                {
                    throw runtime_error("Invalid input for matrix element.");
                }
            }
        }
        return;
    }
    Matrix operator+(const Matrix &other)
    {
        if (row != other.row || col != other.col)
        {
            throw runtime_error("Matrix addition not possible due to incompatible dimensions.");
        }
        Matrix result(row, col);
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }
    Matrix operator-(const Matrix &other) const
    {
        if (row != other.row || col != other.col)
        {
            throw runtime_error("Matrix subtraction not possible due to incompatible dimensions.");
        }
        Matrix result(row, col);
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                result.mat[i][j] = mat[i][j] - other.mat[i][j];
            }
        }
        return result;
    }
    Matrix operator*(const Matrix &other) const
    {
        if (col != other.row)
        {
            throw runtime_error("Matrix multiplication not possible due to incompatible dimensions.");
        }
        Matrix result(row, other.col);
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < other.col; ++j)
            {
                for (int k = 0; k < col; ++k)
                {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }
    void displayMatrix() const
    {
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
    }
};
int main()
{
    int rows1, columns1, rows2, columns2;
    cout << "Enter dimensions for the first matrix (rows columns): ";
    cin >> rows1 >> columns1;
    Matrix matrix1(rows1, columns1);
    try
    {
        matrix1.readMatrix();
        cout << "Enter dimensions for the second matrix (rows columns): ";
        cin >> rows2 >> columns2;
        Matrix matrix2(rows2, columns2);
        try
        {
            matrix2.readMatrix();
            cout << "Matrix 1:\n";
            matrix1.displayMatrix();
            cout << "Matrix 2:\n";
            matrix2.displayMatrix();
            cout << "Matrix Addition:\n";
            Matrix sum = matrix1 + matrix2;
            sum.displayMatrix();
            cout << "Matrix Subtraction:\n";
            Matrix difference = matrix1 - matrix2;
            difference.displayMatrix();

            cout << "Matrix Multiplication:\n";
            Matrix product = matrix1 * matrix2;
            product.displayMatrix();
        }
        catch (const exception &e)
        {
            cerr << "Matrix error: " << e.what() << "\n";
        }
    }
    catch (const exception &e)
    {
        cerr << "Matrix error: " << e.what() << "\n";
    }
    return 0;
}