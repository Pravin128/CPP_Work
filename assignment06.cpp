#include "iostream"
using namespace std;
#include"vector"
class Student
{
public:
    string name;
    int roll;
    string subject;
    void get()
    {
        cout << "Enter Name : " << endl;
        cin >> name;
        cout << "Enter Roll : \n";
        cin >> roll;
        cout << "Enter subject : ";
        cin >> subject;
    }
    void display()
    {
        cout<<"-----------------------------------------------------------\n";
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << roll << endl;
        cout << "Subject: " << subject << endl;
    }
};
class data : public Student
{
public:
    int sub_code;
    int intass_marks;
    int unex_marks;
    void getval()
    {
        cout << "Enter Subject code: ";
        cin >> sub_code;
        cout << endl
             << "Enter internal asesment marks: ";
        cin >> intass_marks;
        cout << endl
             << "Enter university marks: ";
        cin >> unex_marks;
        cout << endl;
    }
    void displayval()
    {
        cout << "Subject code: " << sub_code << endl;
        cout << "Internal assesment marks: " << intass_marks << endl;
        cout << "university marks: " << unex_marks << endl;
        cout<<"-----------------------------------------------------------\n";
    }
};

int main()
{
    int e, cn;

    cout << "Enter number of entries: ";
    cin >> e;
    //	Student *ptr;
    Student s[10];
    data d[10];
    //	ptr=&s;
    for (int i = 0; i < e; i++)
    {
        s[i].get();
    }
    //	ptr[e]=&d[e];
    for (int i = 0; i < e; i++)
    {
        d[i].getval();
    }
    /*ptr->get();
    ptr->display();
    ptr=&d;
    ptr->get();
    ptr->disply(a);
    */
    int ch;
    do
    {
        cout << endl
             << "1.build a master table\n2.List a table.\n3.Insert new entry.\n4.Delete old entry.\n5.Edit an entry.\n6.Serch for record.\n";
        cout << "Enter your Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            for (int i = 0; i < e; i++)
            {
                s[i].display();
                d[i].displayval();
            }
            break;
        }
        case 3:
        {
            s[e].get();
            d[e].getval();
            e++;
            break;
        }
        case 4:
        {
            int del;
            cout << "Enter array element to be deleted : " << endl;
            cin >> del;
            for (int i = del; i < e; i++)
            {
                s[i+1]=s[i];
                d[i + 1] = d[i];
            }
            e--;
            cout << "Entry Deleted....\n";
            break;
        }
        case 5:
        {
            int edit ;
            cout << "Enter entry you want to edit : \n";
            cin >> edit;
            s[edit].get();
            d[edit].getval();
            break;
        }
        case 6:
        {
            int search;
            cout<<"Enter roll to Search : \n";
            cin>>search;
            // while(e)
            // {
            //     if(s[e]==search)
            //     {

            //     }
            //     e--;
            // }
        }
        }
        cout << "do you want to continue...0/1";
        cin >> cn;
    } while (cn == 1);
    return 0;
}