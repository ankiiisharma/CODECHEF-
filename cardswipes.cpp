#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
		int count=0;
		int count1=0;
	    cin>>n;
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	    cin>>a[i];
	    }
	    
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i]==a[j])
				{
					count1 = count1 + 1;
				}
			}

			if(count1 % 2==0)
			{
				count=count+1;
			}
		}
	    // for(int i=0;i<n;i++)
	    // {
	    //     int ans=a[i]%2;
	    //     if(ans!=0)
	    //     {
	    //         count=count+1;
	    //     }
	    // }
	    
	    cout<<count<<endl;
	}
	return 0;
}
