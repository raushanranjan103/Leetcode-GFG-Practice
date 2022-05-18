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
        if (!head || !k) 
            return head;
        ListNode* dummy = new ListNode(0); 
        ListNode* prev = dummy, *curr, *gtemp;
        int len = 0;
        curr = head;
        while (curr) {
            curr = curr -> next;
            len++;
        }
        dummy->next = head; 
        curr = head;
        while (len >= k) {
            for(int i=0; i<k-1; i++) {
                ListNode* temp = prev->next;
                prev->next = curr->next;
                curr->next = curr->next->next;
                prev->next->next = temp;
            }
            prev = curr;
            curr = curr->next;
            len -= k; 
        }
        return dummy->next;
    }
        
    
};