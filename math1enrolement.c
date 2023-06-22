#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int ans,x,y;
	    cin>>x>>y;
	    
	    if(y>x)
	    {
	        ans=y-x;
	        cout<<ans<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}