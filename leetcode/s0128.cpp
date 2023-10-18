#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int m = 1;
        int temp = 1;
        int last=nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == last + 1) {
                temp++;
                last=nums[i];
            } else if (nums[i] == last) {
                continue;
            }else{
                last=nums[i];
                temp=1;
            }
            m = max(temp, m);
        }
        return m;
    }
};