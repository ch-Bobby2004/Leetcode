/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head) return nullptr;

        ListNode* node = head;
        int count = 0;
        while (node && count < k) {
            node = node->next;
            count++;
        }

        if (count < k) return head;

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        int tempK = k;
        while (tempK--) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head->next = reverseKGroup(curr, k);

        return prev;
    }
    
};