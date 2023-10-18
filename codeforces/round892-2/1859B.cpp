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

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    long long beauty = 0;
    // vector<bool> dealt(n);
    auto compare1 = [](const std::pair<int, int>& a,
                       const std::pair<int, int>& b) {
        return a.second > b.second;
    };
    auto compare2 = [](const std::pair<int, int>& a,
                       const std::pair<int, int>& b) {
        return a.second < b.second;
    };
    priority_queue<pair<int, int>, decltype(compare1)> max2nd;
    priority_queue<pair<int, int>, decltype(compare2)> min1st;
    // pair<int,int> min1st;
    for (int i = 0; i < n; i++) {
        int counts;
        cin >> counts;
        a[i].reserve(counts);
        for (int j = 0; j < counts; j++) {
            int temp;
            cin >> temp;
            a[i].push_back(temp);
        }
        sort(a[i].begin(), a[i].end());
        min1st.emplace(i, a[i][0]);
        beauty += a[i][0];
        max2nd.emplace(i, a[i][1]);
    }
    while (!max2nd.empty()) {
        auto target = min1st.top();
        auto origin = max2nd.top();
        // min1st.pop();
        max2nd.pop();
        beauty+=origin[1]-target[0];
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}