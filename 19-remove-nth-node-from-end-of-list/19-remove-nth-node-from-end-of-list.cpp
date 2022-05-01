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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int count=0,start=0;
//         ListNode*cur=head;
//         if(head==NULL)
//             return NULL;
//         else if(n==1&&head->next==NULL)
//         {
//             delete(head);
//             return NULL;
//         }
        
//        else
//        {
//         while(cur!=NULL)
//         {
//             count++;
//             cur=cur->next;
//         }
//            //cout<<head->val;
//                start=count-n;
//            cout<<start<<" "<<n;
//            if(start+1==n)
//            {head=head->next;
//                return head;
//            }
    
//         cur=head;
//         if(start<n)
//             return NULL;
//            if(start==0)
//            {
//                return head->next; 
//            }
//         for(int i=0;i<start-1;i++)
//         {
//             cur=cur->next;
//         }
//         //ListNode*temp=cur->next;
//         cur->next=cur->next->next;
//            return head;

//        }
       ListNode* curr = head;
ListNode* prev = head;

    for (int i=0;i<n;i++){
        curr= curr->next;
    }
    if (!curr)
        return head->next;
    while(curr->next != NULL){
        prev= prev->next;
        curr= curr->next;
    }
    
    prev->next = prev->next->next;
     return head;
    
}
       
        
    
};