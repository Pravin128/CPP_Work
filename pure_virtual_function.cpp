#include <iostream>
using namespace std;
class A
{
    public:
        virtual void get()=0;
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
    B obj;
    ptr=&obj;
    ptr->get();

}