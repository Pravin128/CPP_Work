#include"iostream"
using namespace std;
class shape
{   public:
    double a,b;
    virtual void DisplayArea(double a,double b)
    {
        cout<<"Area of rectangle :"<<a*b<<endl;
        cout<<"Area of triangle :"<<0.5*a*b;
        cout<<endl;
    }
};
class triangle:public shape
{
    public:
    
    void DisplayArea(double a,double b)
    {
         cout<<"Area of triangle :"<<0.5*a*b;
         cout<<endl;
    }
};
class rectangle:public shape
{
    public:
    void DisplayArea(double a,double b)
    {
         cout<<"Area of rectangle :"<<a*b;
         cout<<endl;
    }

};
int main(void)
{
    shape *ptr;
    shape s;
    ptr=&s;
    ptr->DisplayArea(10,20);
    triangle tri;   	  
     cout<<"Enter a : ";
     cin>>tri.a;
     cout <<endl;
     cout<<"enter b : ";
     cin>>tri.b;
     cout<<endl;
    ptr=&tri;
    ptr->DisplayArea(tri.a,tri.b);
    rectangle r;
    cout<<"Enter a : ";
        cin>>r.a;
        cout <<endl;
        cout<<"enter b : ";
        cin>>r.b;
        cout<<endl;
    ptr=&r;
    ptr->DisplayArea(r.a,r.b);



}