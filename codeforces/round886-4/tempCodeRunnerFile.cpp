#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int* list = new int[3];
        cin >> list[0] >> list[1] >> list[2];
        cout << list[0] << list[1] << list[2];
    }
    return 0;
}