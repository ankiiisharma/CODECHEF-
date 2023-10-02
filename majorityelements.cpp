#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>ans;
        for(int i=0;i<nums.size();i++){
          ans[nums[i]]++;
        }
        for(auto it: ans){
          if(it.second>nums.size()/2){
            return it.first;
          }
        }
        return 0;
  }
};

int main(){
  int nums;
  cin>>nums;

  int arr[nums];
  for(int i=0;i<nums;i++){
    cin>>arr[i];
  }

  Solution ob;
  cout<<ob.majorityElement<<endl;
  return 0;
}