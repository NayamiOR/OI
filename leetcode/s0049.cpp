#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> map;
        for (string s : strs) {
            string temp = s;
            sort(temp.begin(), temp.end());
            map[temp].emplace_back(s);
        }
        vector<vector<string>> res;
        for (auto i : map) {
            res.emplace_back(i.second);
        }
        return res;
    }
};