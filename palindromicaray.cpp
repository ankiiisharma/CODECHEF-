#include<iostream>
using namespace std;

class Solution{
    public:
    int PalinArray(int arr[],int n){

        int x,num,flag=0;
        int reverse=0;

        for(int i=0;i<n;i++){
            arr[i]=num;

            while(num!=0){
            x=num%10;
            reverse=(reverse*10)+x;
            num=num/10;
            }
            if(a[i]==reverse){
                flag++;
            }
        }

        if(flag==n){
            return 1;
        }
        else{
            return 0;
        }

    }
};

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]
    }

    Solution ob;

    cout<<ob.PalinArray<<endl;
    return 0;
}