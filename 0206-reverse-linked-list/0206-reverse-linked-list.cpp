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
    ListNode* reverseList(ListNode* head) {
        ListNode* next;
        ListNode* prev = NULL;
        
        while(head){
            next = head->next;   // 1-2-3-4-5. next at 2.
            head->next = prev;   // head->next which was 2 is prev i.e. NULL now. the connection is broken
            prev = head;         // prev is thehead now. i.e. 1. so that we can reverse the connectio in the next cycle.
            head = next;         // now head is shifted to next i.e. 2. so now next cycle we can reverse the connection move to 3.
        }
        return prev;
        
    }
};