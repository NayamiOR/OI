#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i - 1] + nums[i];
        }
        // int a=0,b=0,val=nums[0];
        // while (b<nums.size())
        // {
        //     if (b==a){
        //         if()
        //     }
        // }
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j <= i; j++) {
                int value = nums[i];
            }
        }
        return ans;
    }
};