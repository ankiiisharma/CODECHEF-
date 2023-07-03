#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int s,r;
	   cin>>s;
	   int sum=0;
	   
	   while(s>0)
	   {
	       r=r%10;
	       sum=(sum*10)+r;
	       s=s/10;
	   }
	   
	   if(s==sum)
	   {
	       cout<<"wins"<<endl;
	   }
	   else
	   {
	       cout<<"loses"<<endl;
	   }
	}
	return 0;
}
