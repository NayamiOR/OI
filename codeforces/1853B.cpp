#include <iostream>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = n; i >= 0; i--) {  // 遍历每个数
        int n1 = n, n2 = i;
        for (int j = 2; j <= k; j++) {  // 生成数列判断是否能生成
            int n3 = n1 - n2;
            if (n3 > n2) {
                break;
            }
            n1 = n2;
            n2 = n3;
            if (j == k - 1) {
                ans += 1;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    int times;
    cin >> times;
    for (int i = 0; i < times; i++) {
        solve();
    }
}