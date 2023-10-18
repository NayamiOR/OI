#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == 0 && b.first == 0) {
        return a.second < b.second;
    } else if (a.first == 0) {
        return true;
    } else if (b.first == 0) {
        return false;
    } else if (a.first != b.first) {
        return a.first > b.first;
    } else {
        return a.second < b.second;
    }
}

void solve() {
    int n, att;
    cin >> n >> att;
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        vec[i] = make_pair(temp % att, i + 1);
    }
    sort(vec.begin(), vec.end(), cmp);
    for (int i = 0; i < n; i++) {
        cout << vec[i].second << " ";
    }
    cout << endl;
    for (auto i : vec) {
        cout << i.first << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int times;
    cin >> times;
    for (int i = 0; i < times; i++) {
        solve();
    }
    return 0;
}
