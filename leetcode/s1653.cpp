#include <climits>
#include "iostream"
#include "string"
using namespace std;

class Solution {
   public:
    int minimumDeletions(string s) {
        int split =
            0;  // 第一个b的位置，所以[:split]是a，[split:]是b，也就是分割线在这个指针的左边
        int temp = 0;  // 左边的b数量和右边的a数量之和
        for (char i : s) {
            if (i == 'a') {
                temp++;
            }
        }
        int min = temp;
        while (split < s.size()) {
            if (s[split] == 'a') {
                temp--;
            } else {
                temp++;
            }
            if (temp < min) {
                min = temp;
            }
            split++;
        }
        return min;
    }
};
int main(int argc, char const* argv[]) {
    Solution sol;
    cout << sol.minimumDeletions("aababbab") << endl;
    return 0;
}
