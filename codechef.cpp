#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,i,gcd,k,lcm;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>k;
	   int max_num=max(x,y);
	   while(1)
	   {
	       if(max_num%x==0 && max_num%y==0)
	       {
	           lcm=max_num;
	       }
	   }
	   gcd=(x*y)/lcm;
	    cout<<gcd+lcm<<endl;
	}
	return 0;
}
