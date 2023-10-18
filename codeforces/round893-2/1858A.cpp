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
    int an, ke, both;
    cin >> an >> ke >> both;  // an first
    if (an > ke) {
        cout << "First" << endl;
    } else if (an < ke) {
        cout << "Second" << endl;
    } else {
        if (both % 2 == 0) {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
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