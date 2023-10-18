#include <iostream>
#include <string>
#include <vector>
using namespace std;

char grid[100][100];
bool isValid(int x, int y) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[x+i][y+j] == '.'||grid[x+8-i][y+8-j]=='.') {
                return false;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        if (grid[x+3][y+i] == '#' || grid[x+i][y+3] == '#' || grid[x+5][y+8 - i] == '#' ||
            grid[x+8 - i][y+5] == '#') {
            return false;
        }
    }
    return true;
}
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i <= n - 9; i++) {
        for (int j = 0; j <= m - 9; j++) {
            if (isValid(i, j)) {
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
    return 0;
}