// https://leetcode.com/problems/reverse-linked-list
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = 0;
        
        while(head != NULL){
            ListNode* curr = head;
            head = head->next;
            curr->next = prev;
            prev = curr;
        }
        return prev;
    }
};