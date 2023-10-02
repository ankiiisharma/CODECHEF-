#include<iostream>
#include<std/bits++.h>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        
        // if(n==0){
        //     return 0;
        // }


    //    else
        for(int i=0;i<n;i++){
            int j=i;
            while(j<n && nums[i]==nums[j]){
                j++;
            }

            nums[k++]=nums[i];
            i=j-1;
        }
        return k;
        }
};
// int main()
// {
//     return 0;
// }