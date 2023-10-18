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
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    vector<int> a(n);
    cin >> a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        a[i] -= ans;
        if (a[i] < 0)
            a[i] = 0;
        if (a[i] < a[i - 1]) {
            ans += a[i - 1];
            a[i] -= a[i - 1];
            if (a[i] < 0)
                a[i] = 0;
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}