#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int twoSums(vector<int>& numbers, int target){
    int left =0;
    int right = numbers.size()-1;

    while(left<right){
        int current_sum = numbers[left] + numbers[right];

        if(current_sum == target){
            return ( left + 1, right + 1) ;
        }
        else if(current_sum<target){
            left = left + 1;
        }
        else{
            right = right - 1;

        }
    }
return {};
}


int main()
{
    int n,a;
    cin>>n;
    
    vector<int>numbers;
    for(int i=0;i<n;i++){
        cin>>a;
        numbers.push_back(a);
    }
    int target;
    cin>>target;
    int ans = twoSums(numbers,target);
    cout<<ans<<" ";
    return 0;
}