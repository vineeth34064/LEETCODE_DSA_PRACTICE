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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        vector<int> ans1;
        vector<int> ans2;

        while (l1 != nullptr) {
            ans1.push_back(l1->val);
            l1 = l1->next;
        }

        while (l2 != nullptr) {
            ans2.push_back(l2->val);
            l2 = l2->next;
        }

        vector<int> res;
        int carry = 0;
        int i = 0;

        while (i < ans1.size() || i < ans2.size() || carry) {

            int sum = carry;

            if (i < ans1.size())
                sum += ans1[i];

            if (i < ans2.size())
                sum += ans2[i];

            res.push_back(sum % 10);
            carry = sum / 10;
            i++;
        }

        ListNode* dummy = new ListNode(res[0]);
        ListNode* current = dummy;

        for (int i = 1; i < res.size(); i++) {
            current->next = new ListNode(res[i]);
            current = current->next;
        }

        return dummy;
    }
};