#include<iostream>
using namespace std;
int main()
{
    int i,a,flag=0;
    cout<<"Enter number : ";
    cin>>a;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
           flag=1;
            break;    
        }
        else{
            flag=0;
        }
        
    }
    if(flag==1)
    {
        cout<<" not prime\n";
    }
    else
    {
        cout<<"prime";
    }

    return 0;
}
