#include "iostream"
using namespace std;
class Employee
{
    // private
    int id;
    static int count;

public:
    void getdata();
    void putdata();
    static void print_count();
};
int Employee ::count; // default value of static variable is 0
void Employee ::getdata()
{
    cout << "Enter id :" << endl;
    cin >> id;
    count++;
    cout << endl;
}
void Employee::putdata()
{
    cout << "Employee id is : " << id << endl;
}
void Employee ::print_count()
{
    cout << "count is " << count << endl;
}
int main()
{
    Employee pravin,sid;
    pravin.getdata();
    pravin.putdata();
    Employee::print_count();
    sid.getdata();
    sid.putdata();
    Employee::print_count();
}