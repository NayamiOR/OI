// #include <algorithm>
// #include <cmath>
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> sieve(long long n) {
//     vector<bool> is_prime(n, true);
//     vector<int> primes;
//     for (int i = 2; i < n; i++) {
//         if (is_prime[i]) {
//             primes.push_back(i);
//             for (int j = i * i; j < n; j += i) {
//                 is_prime[j] = false;
//             }
//         }
//     }
//     return primes;
// }
// vector<int> get_divisors(long long n) {
//     vector<int> divisors;
//     divisors.push_back(1);
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             divisors.push_back(i);
//             if (i != n / i) {
//                 divisors.push_back(n / i);
//             }
//         }
//     }
//     if (sqrt(n) == floor(sqrt(n))) {
//         divisors.push_back(sqrt(n));
//     }
//     return divisors;
// }
// void solve() {
//     long long n;
//     cin >> n;
//     // auto primes = sieve(n);
//     vector<int> factors;
//     factors = get_divisors(n);
//     int m = 0;
//     sort(factors.begin(), factors.end());
//     int length = 1;
//     for (int i = 1; i < n; i++) {
//         if (factors[i] == factors[i - 1] + 1) {
//             length++;
//             m = max(m, length);
//         } else {
//             length = 1;
//         }
//     }
//     cout << length << endl;
// }

// int main() {
//     int times;
//     cin >> times;
//     for (int i = 0; i < times; i++) {
//         solve();
//     }
//     return 0;
// }

#include <algorithm>
#include <bitset>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    int ans = 0;
    int temp = 1;
    while (n % temp == 0) {
        ans++;
        temp++;
    }
    cout << ans << endl;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int min=nums[0],max=nums[0];
        vector<int> sum(nums.size());
        sum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            sum[i]=nums[i]+sum[i-1];
            if (sum[i]>max){
                max=sum[i];
                cout<<i<<"max "<<max<<endl;
            }else if(sum[i]<min){
                min=sum[i];
                cout<<i<<"min "<<min<<endl;
            }

        }
        return max-min;
    }
};