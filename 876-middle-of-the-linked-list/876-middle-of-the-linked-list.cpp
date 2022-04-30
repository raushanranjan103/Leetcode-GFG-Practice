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
    ListNode* middleNode(ListNode* head) {
if(head==NULL)
    return NULL;
        if(head->next==NULL)
        {
            return head;
        }
        ListNode*curr=head;
        int c=0;
        while(curr!=NULL)
        {c++;
            curr=curr->next;
            
        }
       // cout<<c;
  c=c/2;
        curr=head;
        for(int i=1;i<c;i++)
        {
            curr=curr->next;
        }
       return curr->next;
        
        
    }
};