#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    int a = 5*x+10*y;
	    
	    int ans=a/z;
	    cout<<ans<<endl;
	}
	return 0;
}