#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,vector<int>> index;
            for(int i=0;i<nums.size();i++){
                index[nums[i]].push_back(i);
            }
            sort(nums.begin(),nums.end());
            int i=0,j=nums.size()-1;
            while(i<j){
                if(nums[i]+nums[j]==target){
                    if(nums[i]==nums[j]){
                        return { index[nums[i]][0] , index[nums[i]][1] };
                    }
                    else{
                        return {index[nums[i]][0],index[nums[j]][0]};
                    }
                }
                else if(nums[i]+nums[j]<target){
                    i++;
                }
                else{
                    j--;
                }
            }
            for(auto i: index){
                if(index[target-index[i][0]][0]){
                    return true;
                }
            }
            return {0,0};
        }
    };