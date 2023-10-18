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
    vector<int> a(n), b, c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end() /*, greater<int>()*/);
    // c.push_back(a[0]);
    b.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        bool goB = false;
        for (auto j : b) {
            if (j % a[i] == 0) {
                goB = true;
                break;
            }
        }
        if (goB)
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }
    if (b.empty() || c.empty()) {
        cout << -1 << endl;
        return;
    }
    printf("%d %d\n", b.size(), c.size());
    cout << b[0];
    for (auto i = 1; i < b.size(); i++)
        cout << " " << b[i];
    cout << endl;
    cout << c[0];
    for (auto i = 1; i < c.size(); i++)
        cout << " " << c[i];
    cout << endl;
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
