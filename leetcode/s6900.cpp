#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
   public:
    int countCompleteSubarrays(vector<int>& nums) {
        int left = 0;
        unordered_map<int, int> diff;
        unordered_map<int, int> tempDiff;
        for (auto i : nums) {
            diff[i]++;
        }
        int ans = 0;
        int diffNums = diff.size();
        for (int i = 0; i < nums.size(); i++) {
            tempDiff[nums[i]]++;
            while (tempDiff.size() == diffNums) {
                tempDiff[nums[left]]--;
                if (tempDiff[nums[left] == 0]) {
                    tempDiff.erase(nums[left]);
                }
                left++;
            }
            ans += left;
        }
        return ans;
    }
};