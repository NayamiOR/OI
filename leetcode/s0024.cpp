#include <iostream>
#include <vector>
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
   public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* root = new ListNode(0);
        root->next = head;
        auto pin = root;
        while (pin->next != nullptr) {
            auto n1 = pin->next;
            if (n1->next == nullptr) {
                return root->next;
            }
            auto n2 = n1->next;
            auto n3 = n2->next;
            pin->next = n2;
            n1->next = n3;
            n2->next = n1;
            pin = pin->next->next;
        }
        return root->next;
    }
};