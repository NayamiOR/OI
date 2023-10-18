#include <iostream>
#include <vector>
#include <deque>
using namespace std;
// 4 4
// 1 1 1 1
// 1 1 1 1
// 1 0 1 0
// 0 1 0 1

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // cin >> matrix[i][j];
            int temp;
            do {
                temp = int(getchar());
            } while (temp == 10);

            matrix[i][j] = temp - 48;
        }
    }
    auto dq = deque<vector<int>>();
    dq.push_back({2, 2});
}