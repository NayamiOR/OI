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
    int n, k;
    cin >> n >> k;
    vector<int> list(n + 1);
    list[0] = 0;
    int max = 0;
    for (int i = 1; i <= n - 1; i++) {
        cin >> list[i];
        max = std::max(max, list[i]);
    }
    cin >> list[n];
    if (max == list[n]) {
        cout << list[n] + 1 << endl;
    } else {
        cout << list[n] << endl;
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