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
        cout << "m= " << m << " n=" << n;
    }
    friend void operator+(add &x, add &y);
};
void operator+(add &x, add &y)
{
    x.m = x.m + y.m;
    x.n = x.n + y.n;
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
