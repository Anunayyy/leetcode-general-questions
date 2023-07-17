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
    std::stack<int> stack1, stack2;

    // Push values from first linked list to stack1
    while (l1) {
        stack1.push(l1->val);
        l1 = l1->next;
    }

    // Push values from second linked list to stack2
    while (l2) {
        stack2.push(l2->val);
        l2 = l2->next;
    }

    ListNode* result = nullptr;
    int carry = 0;

    while (!stack1.empty() || !stack2.empty() || carry) {
        int total = carry;

        if (!stack1.empty()) {
            total += stack1.top();
            stack1.pop();
        }

        if (!stack2.empty()) {
            total += stack2.top();
            stack2.pop();
        }

        carry = total / 10;
        int current_digit = total % 10;

        ListNode* new_node = new ListNode(current_digit);
        new_node->next = result;
        result = new_node;
    }

    return result;
}
};