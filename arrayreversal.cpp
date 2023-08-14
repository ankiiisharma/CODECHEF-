#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int l=0;
    int m=n;

        for(int i=0;i<n;i++)
        {
            if(l<=n)
            {
            swap(a[l+i],a[l-i]);
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
}