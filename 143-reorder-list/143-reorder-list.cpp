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
    void reorderList(ListNode* head) {
        ListNode*cur=head;
    int c=0;
    vector<int>res;
    while(cur!=NULL)
    {c++;
    res.push_back(cur->val);
    cur=cur->next;
        
    }
    // if(head==NULL)
    // return head;
    ListNode*ls=head;
    int i=0,j=c-1;
    int f=0;
   while(i<=j)
   {if(f==0)
   {
       ls->val=res[i];
       i++;
       f=1;
       ls=ls->next;
   }
   else if(f==1)
   {ls->val=res[j];
   j--;
   f=0;
   ls=ls->next;
       
   }
       
   }
        
    }
};