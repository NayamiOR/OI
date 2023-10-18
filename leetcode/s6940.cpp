#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
   public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        auto root = new ListNode();
        root->next = head;
        auto pin = head;
        while (pin != nullptr && pin->next != nullptr) {
            auto n = pin->next;
            pin->next = new ListNode(gcd(pin->val, n->val));
            pin->next->next = n;
            pin = pin->next->next;
        }
        return root->next;
    }
};