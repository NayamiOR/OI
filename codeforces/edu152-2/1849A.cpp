#include <iostream>
using namespace std;

void solve() {
    int b, c, h;
    cin >> b >> c >> h;
    int ch = c + h;
    int result = 0;
    if (ch + 1 == b) {
        result = b + ch;
    } else if (ch + 1 > b) {
        result = b * 2 - 1;
    } else {
        result = ch * 2 + 1;
    }
    cout << result << endl;
}

int main() {
    int times;
    cin >> times;
    for (int i = 0; i < times; i++) {
        solve();
    }
    return 0;
}