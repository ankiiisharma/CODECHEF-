#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 
	 int n;
	 cin>>n;
	 
	 int x=2*n;
	 int a[x];
	 
	 for(int i=0;i<x;i++)
	 {
	     cin>>a[i];
	 }
	 //main logic
	 
	 int c=0;
	 
	 for(int i=0;i<x-1;i++)
	 {
	     for(int j=0;j<x;j++)
	     {
	         if(a[i]==a[j])
	         {
	             c=c+1;
	         }
	         
	     }
	 }
     if(c==3)
	         {
	             cout<<"NO"<<endl;
	         }
	         else{
	             cout<<"YES"<<endl;
	         }
	    
	}
	return 0;
}