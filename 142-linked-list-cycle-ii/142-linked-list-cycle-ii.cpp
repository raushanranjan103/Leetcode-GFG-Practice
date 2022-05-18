/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        
        bool cycle = false;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                cycle = true;
                break;
            }
        }
        
        if(cycle == false)
            return NULL;
        
        ListNode* temp = head;
        while(temp != slow){
            temp = temp->next;
            slow = slow->next;
        }
//         if(slow!=fast)
//             return NULL;
//         slow=head;
//         if(slow->next!=fast->next)
//         {
//             slow=slow->next;
//             fast=fast->next;
//         }
//         fast->next=NULL;
        
//  return head;
        return slow;
    
    }
};