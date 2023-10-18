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
#define ll long long
#define ull unsigned long long
using namespace std;

void solve() {
	string n;
	cin >> n;
	n = "0" + n;
	int i = 1;
	int split = -1;
	for (i = 1; i < (int)n.length(); i++) {
		if (split != -1) {
			n[i] = '0';
			continue;
		}
		int digit = n[i] - '0';
		if (digit >= 5)//这里找到了最靠左的可以四舍五入的数,就是split
			split = i;
	}

	while (split >= 1 && (n[split] >= '5' || n[split] == ':')) {
		n[split] = '0';
		n[split - 1]++;
		split--;
	}
	if (n[0] == '0')
		cout << n.substr(1) << endl;
	else
		cout << n << endl;


}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
