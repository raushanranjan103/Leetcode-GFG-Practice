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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*>s;
        ListNode*curr=headA;
        while(curr)
        {
            s.insert(curr);
            curr=curr->next;
        }
        ListNode*curr2=headB;
        while(curr2!=NULL)
        {if(s.find(curr2)!=s.end())
        {
            return curr2;
        }
         curr2=curr2->next;
            
        }
        return NULL;
        
    }
};