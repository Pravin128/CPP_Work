#include "iostream"
using namespace std;
int main(void)
{
    int row, cols, n = 8;
    for (row = 1; row < n; row++)
    {
        for (cols = 1; cols < row; cols++)
        {
            cout << cols << " ";
        }
        cout << endl;
    }
}