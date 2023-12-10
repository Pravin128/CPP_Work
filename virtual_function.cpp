#include <iostream>
using namespace std;
class A
{
    public:
        virtual void get(){
            cout<<"virtual"<<endl;
        }
};
class B:public A
{   public:
    void get(){
    cout<<"virtual B"<<endl;
    }
};
int main()
{
    A *ptr;
    A obj1;
    ptr=&obj1;
    ptr->get();
    B obj;
    ptr=&obj;
    ptr->get();

}