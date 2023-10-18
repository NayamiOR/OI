#include <algorithm>
#include <bitset>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
   public:
    int findLongestChain(vector<vector<int>>& pairs) {
        // sort(pairs.begin(),pairs.end(),cmp);
        sort(pairs.begin(), pairs.end(),
             [&](vector<int>& a, vector<int>& b) { return a[1] < b[1]; });
        int ans = 1;
        int lastEnd = pairs[0][1];
        for (int i = 1; i < pairs.size(); i++) {
            if (pairs[i][0] > lastEnd) {
                lastEnd = pairs[i][1];
                ans++;
            }
        }
        return ans;
    }
};