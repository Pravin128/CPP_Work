#include "iostream"
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(1);
    cout<<a.capacity()<<endl;
    cout<<a.size()<<endl;
    a.push_back(2);
    cout<<a.capacity()<<endl;
    cout<<a.size()<<endl;
    a.push_back(3);
    cout<<a.capacity()<<endl;
    cout<<a.size()<<endl;
     a.push_back(23);
    cout<<a.capacity()<<endl;
    cout<<a.size()<<endl;
    
    a.push_back(23);
    cout<<a.capacity()<<endl;
    cout<<a.size()<<endl;

    return 0;
}