#include <iostream>
using namespace std;
class add
{
    int m, n;

public:
    add(int x, int y)
    {
        m = x;
        n = y;
    }
    void display()
    {
        cout << "m= " << m << endl
             << "n=" << n << endl;
    }
    void operator+(add &x);
};
void add::operator+(add &x)
{
    m = m + x.m;
    n = n + x.n;
}
int main()
{
    add obj1(20, 30);
    add obj2(2, 3);
    obj1.display();
    obj2.display();
    obj1 + obj2;
    obj1.display();
    return 0;
}
