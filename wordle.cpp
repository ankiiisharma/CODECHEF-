#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s,u;
	    
	    cin>>s>>u;
	    
	    for(int i=0;i<5;i++)
	    {
	        if(s[i]==u[i])
	        {
	            cout<<"G";
	        }
	        else if(s[i]!=u[i])
	        {
	            cout<<"B";
	        }
	    }
	    cout<<endl;
	    }
	return 0;
}