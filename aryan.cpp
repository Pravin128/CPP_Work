
#include<iostream>
using namespace std;
class student{
    public:
    int size,i;
    string name;
    int m,c,p,b;
    int percent;
   
    
    void input(){
        cout<<"enter number of students : ";
        cin>>size;
        for(i=0;i<size;i++){
            cout<<"\nenter name :";
            cin>>name;
            cout<<"\nenter marks for math chem phy bio";
            cin>>m>>c>>p>>b;
            calculate();
            display();
            
            
                   
            }
        

    }
     void calculate(){
        percent=(m+c+p+b)/4;

    }
    void display(){
        cout<<"Percentage is : "<<percent;}
};
int main(){
    student s;
    s.input();
    
    return NULL;
}

