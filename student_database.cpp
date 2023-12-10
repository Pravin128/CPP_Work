#include "iostream"
using namespace std;
class student
{
public:
    string name;
    int maths;
    int phy;
    int chem;
    int c;
    int sci;
    int percent;
    void calculate()
    {
        int marks_obtain = maths + phy + chem + c + sci;
        percent = (marks_obtain / 5);
        // display();
    }
    void display()
    {
        cout << "percents : " << percent << endl;
    }
};
int main(void)
{
    int stud;
    cout<<"Enter number of student :";
    cin>>stud;
    student obj[5];
    while(stud--){
    cout << "enter student name :";
    cin >> obj[stud].name;
    cout << endl;
    cout << "enter maths marks :";
    cin >> obj[stud].maths;
    cout << endl;
    cout << "enter physics marks :";
    cin >> obj[stud].phy;
    cout << endl;
    cout << "enter chemistry marks :";
    cin >> obj[stud].chem;
    cout << endl;
    cout << "enter science marks :";
    cin >> obj[stud].sci;
    cout<<endl;
    cout << "enter c marks :";
    cin >> obj[stud].c;
    cout << endl;
    obj[stud].calculate();
    obj[stud].display();
    }
}