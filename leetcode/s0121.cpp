// #include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int lowest = prices[0];
        int m = 0;
        for (int i : prices) {
            if (i < lowest)
                lowest = i;
            else if (i > lowest)
                m = max(i - lowest, m);
        }
        return m;
    }
};