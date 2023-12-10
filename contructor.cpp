#include"iostream"
#include"string.h"
using namespace std;
class student
{
    int roll;
    string name;
    int marks;
 public:   
student()
{
    roll=1;
    name="aryan";
    marks=90;
    cout<<roll<<endl<<name<<endl<<marks<<endl;
} 
student(int roll,string name,int marks)
{   
    
    // strcpy("pravin",name1);
    cout<<roll<<endl<<name<<endl<<marks<<endl;
}
};

int main(void)
{
    student s;
    student s1();
    
    
}