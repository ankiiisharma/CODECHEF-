#include<iostream>
#include<bits/stdc++.h>

using namespace std;

Class Solution{
    public:

    int Union(int a[],int n,int b[], int m){
        map <int,int> ans;

        for(int i=0;i<n;i++){
            ans.insert({a[i],i});
        }
        for(int i=0;i<m;i++){
            ans.insert({b[i],i});
        }

        for(auto itr=ans.begin();itr!=ans.end();itr++)
            cout<<ans->first<<" ";
    }

};

int main(){

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int a[n],b[m];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }

        Solution ob;
        cout<<ob.Union(a,n,b,m)<<endl;


    }
    return 0;
}