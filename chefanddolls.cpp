#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	 int n,count;
	 cin>>n;
	 
	 int arr[n];
	 
	 for(int i=0;i<n;i++)
	 {
	   cin>>arr[i];  
	 }
	 
	 for(int i=0;i<n;i++)
	 {
	     if(arr[i]%2!=0)
	     {
	         count=count+1;
	     }
	 }
	 cout<<count<<endl;
	}
	return 0;
}