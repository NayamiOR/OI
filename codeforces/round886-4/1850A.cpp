#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int* list = new int[3];
        cin >> list[0] >> list[1] >> list[2];
        sort(list, list + 3);
        cout << ((list[1] + list[2]) >= 10 ? "YES" : "NO") << endl;
    }
    return 0;
}