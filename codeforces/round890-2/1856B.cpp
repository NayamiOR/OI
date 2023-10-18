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
    int ones = 0;
    vector<long long> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 1)
            ones++;
    }
    if (n == 1) {
        cout << "NO" << endl;
        return;
    }
    if (2 * n - sum + ones > n)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
