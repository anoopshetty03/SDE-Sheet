// https://leetcode.com/problems/linked-list-cycle/
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Floyd's cycle detection algorithm
        if(head == NULL)
            return false;

        ListNode *slow = head;
        ListNode *fast = head;

        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;

            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};
