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
#define ll long long
#define ull unsigned long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    int odd = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp % 2 != 0) {
            odd++;
        }
    }
    if (odd % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
