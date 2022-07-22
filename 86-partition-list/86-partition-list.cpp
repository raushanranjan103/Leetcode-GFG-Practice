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
    ListNode* partition(ListNode* head, int x) {
        vector<int>r;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            (r.push_back(temp->val));
            
            temp=temp->next;
        }
        ListNode* temp1=head;
        int n=0;
        for(int i=0;i<r.size();i++)
        {
            
            if(r[i]<x)
            {
                temp1->val=r[i];
                temp1=temp1->next;
                n++;
            }
         
            
        }
       
        for(int i=0;i<r.size();i++)
        {
            if(r[i]>=x)
            {
                cout<<temp1->val;
                temp1->val=r[i];
                temp1=temp1->next;
            }

            
        }
        return head;
        
        
    }
};