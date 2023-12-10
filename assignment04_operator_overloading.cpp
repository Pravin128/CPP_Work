#include "iostream"
// #include"math.h"
// #include"complex"
using namespace std;
class complex
{
    int real, imag;
public:
    complex()
    {
        // cout << "Enter Complex Number in the form  a+bi \n";
        real = imag = 0;
    }
    void Accept()
    {
        cout << "Enter Real and Imaginary Part : ";
        cin >> real >> imag;
        cout << "complex number is " << real << " + " << imag << "i" << endl;
    }
    complex operator+(const complex &obj)
    {
        complex cm;
        cm.real = real + obj.real;
        cm.imag = imag + obj.imag;
        return cm;
    }
    complex operator*(const complex &obj)
    {
        complex mul;
        mul.real = (real * obj.real) - (imag * obj.imag);
        mul.imag = (obj.real * imag) + (obj.imag * real);
        return mul;
    }
    void display_Sum()
    {
        cout << "Addition is :" << real << " + " << imag << "i" << endl;
    }
    void display_Multiplication()
    {
        cout << "Multiplication is :" << real << " + " << imag << "i" << endl;
    }
};
int main()
{

    // Complex_Number();
    complex c1, c2, result;
    c1.Accept();
    c2.Accept();
    result = c1 + c2;
    result.display_Sum();
    result = c1 * c2;
    result.display_Multiplication();
}