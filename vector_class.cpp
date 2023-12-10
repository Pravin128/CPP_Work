

// C++ Program to create 
// a vector of class objects 
#include <iostream> 
#include <string> 
#include <vector> 
  
using namespace std; 
  
int randomInt(int start, int range) 
{ 
    // A function to generate random numbers 
    return (start + rand() % range); 
} 
  
string randomString(int len) 
{ 
    // A function to generate random strings of length --> 
    // "len" 
    string str; 
    for (int i = 0; i < len; i++) { 
        char ch = 'A' + rand() % 26; 
        str.push_back(ch); 
    } 
    return str; 
} 
  
class Student { 
    int roll; 
    string name; 
    int age; 
    int marks; 
  
public: 
    void getter() 
    { 
        roll = randomInt(100, 50); 
        name = randomString(10); 
        age = randomInt(10, 10); 
        marks = randomInt(200, 300); 
    } 
    void disp() 
    { 
        cout << roll << "\t" << name << "\t" << age << "\t"
             << marks << "\n"; 
    } 
}; 
  
int main() 
{ 
    // Vector of class objects 
    vector<Student> v; 
    Student s; 
  
    for (int i = 0; i < 10; i++) { 
        // getting the random values from 
        // functions 
        s.getter(); 
        // inserting objects to vector 
        v.push_back(s); 
    } 
  
    for (int i = 0; i < 10; i++) { 
        // displaying object data 
        v[i].disp(); 
    } 
  
    return 0; 
}