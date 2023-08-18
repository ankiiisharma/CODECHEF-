#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the numbers of Elements of the Array"<<endl;
    cin>>n;

    int max=INT_MAX;// maximum value cpp can hold
    int min=INT_MIN;// minimum value cpp can hold 

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]<max)
        {
            max=a[i];
        }

        else if(a[i]>min)
        {
            min=a[i];
        }
    }

    cout<<"Maximum Element is: "<<min<<endl;
    cout<<"Mimimum element is: "<<max;
    
}