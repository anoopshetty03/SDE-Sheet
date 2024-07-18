// https://leetcode.com/problems/reverse-nodes-in-k-group/
// Love Babbar Solution
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
    //base call
    if(head == NULL) {
        return NULL;
    }
    
    //step1: reverse first k nodes
    ListNode* next = NULL;
    ListNode* curr = head;
    ListNode* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < k ) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //step2: Recursion will look after 
    if(next != NULL) {
        head -> next = reverseKGroup(next,k);
    }
    
    //step3: return head of reversed list
    return prev;
    }
};