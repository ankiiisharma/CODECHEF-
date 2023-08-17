#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int kthsmallest(int a[], int l, int n, int k);
{
    priority_queue<int> maxHeap;
    for(int i=l;i<n;i++)
    {
        maxHeap.push(a[i]);
        if(maxHeap.size()>k)
        {
            maxHeap.pop();
        }
    }

    return maxHeap.top();
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    int l=0;
    for(int i=l;i<n;i++)
    {
        cin>>a[i];
    }

    int k;
    cin>>k;

    kthsmallest(int a[], int l, int n, int k);

    return 0;
}