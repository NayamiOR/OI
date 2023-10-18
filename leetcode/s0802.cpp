#include <algorithm>
#include <bitset>
#include <cmath>
#include <functional>
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
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> ans;
        vector<int> color;
        function<bool(int)> dfs = [&](int i) {
            if(graph.empty()){
                return true;
            }
        };
        for (int i = 0; i < graph.size(); i++) {
            if (dfs(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};