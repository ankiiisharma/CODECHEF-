#include <iostream>
using namespace std;

int main()
{
   int n,temp,i,j;
   cin>>n;

   int a[n];
   for(i=0;i<n;i++)
   {
    cin>>a[i];
   }

    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

        // i++;
        // j--;
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


}