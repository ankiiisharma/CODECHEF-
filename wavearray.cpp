#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int SortinWave(int a[],int n){

    for(int i=0;i<n-1;i+=2){
        swap(a[i],a[i+1]);
    }
    return 0;
}

int main() {
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    SortinWave(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    return 0;
}