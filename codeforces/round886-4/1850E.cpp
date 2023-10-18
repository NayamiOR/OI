#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;
int main() {
	int times;
	cin >> times;
	for (int t = 0; t < times; t++) {
		long long n, c;
		cin >> n >> c;
		int* A = new int[n];
		for (int i = 0; i < n; i++)
			cin >> A[i];
		long long a = -1;
		long long b = 5e8;
		while (a + 1 < b) {
			long long mid = (a + b) >> 1;
			long long result =
			    0;
			for (int i = 0; i < n; ++i) {
				result += (A[i] + 2 * mid) * (A[i] + 2 * mid);
				if (result > c) break;
			}
//			4 * n * mid * mid + 4 * mid * total_length + total_area;
			if (c == result) {
				cout << mid << endl;
				break;
			} else if (c < result) {
				b = mid;
			} else {
				a = mid;
			}
		}
	}

	return 0;
}

// #include <algorithm>
// #include <climits>
// #include <iostream>
// using namespace std;
// int main() {
// 	int times;
// 	cin >> times;
// 	for (int t = 0; t < times; t++) {
// 		long long n, c;
// 		cin >> n >> c;
// 		long long total_area=0;
// 		long total_length=0;
// 		for (int i = 0; i < n; i++) {
// 			int temp;
// 			cin >> temp;
// 			total_length += temp;
// 			total_area += temp * temp;
// 		}
// 		long long a = -1;
// 		long long b = 500000000;
// 		while (a + 1 < b) {
// 			long long mid = (a + b) >> 1;
// 			long long result =
// 			4 * n * mid * mid + 4 * mid * total_length + total_area;
// 			if (c == result) {
// 				cout << mid << endl;
// 				break;
// 			} else if (c < result) {
// 				b = mid;
// 			} else {
// 				a = mid;
// 			}
// 		}
// 	}
	
// 	return 0;
// }

