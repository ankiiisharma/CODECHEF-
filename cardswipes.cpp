#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count;
	    cin>>n;
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	    cin>>a[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        int ans=a[i]%2;
	        if(ans!=0)
	        {
	            count=count+1;
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}
