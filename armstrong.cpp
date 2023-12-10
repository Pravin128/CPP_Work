#include <iostream>
#include <math.h>
using namespace std;

int isArmstrong(int num);

int main(void)
{
    int num;
    cout << "Enter a number to check if it is an Armstrong number: ";
    cin >> num;
    if (isArmstrong(num))
    {
        cout << num << " is an Armstrong number" << endl;
    }
    else
    {
        cout << num << " is not an Armstrong number" << endl;
    }
}

int isArmstrong(int num)
{
    int temp = num, a, sum = 0, x = 0;
    while (temp > 0)
    {
        temp /= 10;
        x++;
    }
    temp = num;
    while (temp > 0)
    {
        a = temp % 10;
        sum += pow(a, x);
        temp /= 10;
    }
    return (num == sum);
}