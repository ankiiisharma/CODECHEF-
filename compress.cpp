#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int k=n;
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==a[i+1])
	        {
	            k--;
	        }
	    }
	    cout<<k<<endl;
	    
	}
	return 0;
}
