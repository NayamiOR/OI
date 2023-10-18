#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> list(n + 1);
    // vector<pair<int,int>> unhappy;
    // vector<int> unhappy;
    int unhappy = 0;
    for (int i = 1; i < n + 1; i++) {
        cin >> list[i];
        if (i == list[i]) {
            unhappy++;
        }
    }
    cout << (unhappy + 1) / 2 << endl;
}

int main() {
    int times;
    cin >> times;
    for (int i = 0; i < times; i++) {
        solve();
    }
}