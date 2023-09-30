#include<iostream>
using namespace std;
int main()
{
    int n;
    int flag=0;

    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=flag+1;
            }
        }
        if(flag>=ans){
            ans=arr[i];

        }
    }

    cout<<ans<<endl;

    return 0;
}