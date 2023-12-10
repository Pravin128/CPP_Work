#include "iostream"
#include "vector"
#include "stdexcept"
using namespace std;
class Matrix
{
private:
    int row, col;
    vector<std::vector<int>> data;

public:
    Matrix(int row, int col) : row(row), col(col), data(row, vector<int>(col, 0)) {}
    void readMatrix()
    {
        cout << "Enter Matrix elements :";
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout << "Enter Element for row " << i + 1 << "and coloumn " << j + 1 << " ";
            }
            if (!(cin >> data[i][j]))
            {
                throw runtime_error("Invalid input for matrix element.");
            }
        }
    }
};
