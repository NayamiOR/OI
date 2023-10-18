#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long> list(n + 1, 0);
    vector<long> count(n + 1, 0);
    int max = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= n) {
            list[x]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; i * j <= n; j++) {
            count[i * j] += list[i];
            if (count[i * j] > max) {
                max = count[i * j];
            }
        }
    }
    cout << max << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}