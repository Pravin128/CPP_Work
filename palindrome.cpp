#include"iostream"
using namespace std;
int main(void)
{
    int num,num_1,rev=0,temp=0;
    cout<<"Enter number: ";
    cin>>num;
    num_1=num;
    while(num_1>0)
    {
        temp=num_1%10;
        rev=rev*10+temp;
        num_1/=10;
    }

    if(num==rev)
    {
        cout<<"Number is Palindrome"<<endl;

    }
    else
    cout<<"Number is not Palindrome\n";
}