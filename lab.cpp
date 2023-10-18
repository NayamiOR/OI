#include <algorithm>
#include <bitset>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
   public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, less<int>> tempQ;
        for (int i = 0; i < nums.size(); i++) {
            tempQ.push(nums[i]);
        }
        long long sum = 0;
        for (int i = 0; i < k; i++) {
            auto temp = tempQ.top();
            sum += temp;
            tempQ.pop();
            tempQ.push(ceil(temp / 3));
        }
        return sum;
    }
};

int main() {
    priority_queue<int, vector<int>, less<int>> tempQ;
    tempQ.push(1);
    tempQ.push(2);
    tempQ.push(3);
    for (int i = 0; i < 3; i++) {
        cout << tempQ.top() << endl;
        tempQ.pop();
    }
}
