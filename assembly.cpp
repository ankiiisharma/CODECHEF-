#include<iostream>
using namespace std;

void Assembly(n)
{
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //main logic

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]<a[i])
            {
                count=count+1;
            }
        }
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;        
        Assembly(n);
        cout<<count<<endl;
    }
    return 0;
}