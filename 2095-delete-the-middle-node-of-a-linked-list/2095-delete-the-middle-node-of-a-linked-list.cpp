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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)
    return NULL;
        if(head->next==NULL)
        {
            delete(head);
            return NULL;
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
        for(int i=0;i<c-1;i++)
        {
            curr=curr->next;
        }
        curr->next=curr->next->next;
            
           //  ListNode*temp=curr->next;
           //  curr=curr->next->next;
           //   // cout<<temp->val;
           // // delete(temp);
           //   delete(curr->next);
            return head;
        
       
        
    }
};