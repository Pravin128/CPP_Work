#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,s;
	cin>>t;
	while(t--)
	{
	    cin>>n>>s;
	    int a[100],count=0;
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=n;j++)
	        {
	            if(i+j==s)
	            {
	                cout<<i<<" "<<j<<endl;
	                a[count]=i-j;
	                count++;
	            }
	        }
	        
	    }
        for (int i = 0; i < count - 1; i++)
			{
				for (int j = 0; j < count - i - 1; j++)
				{
					if (a[j] > a[j + 1])
					{
						int temp = a[j];
						a[j] = a[j + 1];
						a[j + 1] = temp;
					}
				}
			}
	   cout<<a[sizeof(a)-1]<<endl;
	}
	return 0;
}
