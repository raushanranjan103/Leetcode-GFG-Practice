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
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         vector<int>r1,r2,res;
//         ListNode*curr=l1;
//         while(curr!=NULL)
//         {
//             curr=curr->next;
//             r1.push_back(curr->val);
             
//         }
//         curr=l2;
//         while(curr!=NULL)
//         {
//             curr=curr->next;
//             r2.push_back(curr->val);
//         }
//         int ress=0,ress1=0;
//         for(int i=r1.size()-1;i>=0;i--)
//         {ress=ress*10+r1[i];
            
//         }
//         for(int i=r2.size()-1;i>=0;i--)
//         {ress1=ress1*10+r2[i];
            
//         }
//          ress+=ress1;
//         while(ress>0)
//         {
//             res.push_back(ress%10);
//             ress/=10;
//         }
//         reverse(res.begin(),res.end());
     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* x=new ListNode(-1);
        ListNode* temp=x;
        int c=0;
        while(temp1 || temp2){
            int a=0,b=0;
            if(temp1)
            a=temp1->val;
            if(temp2)
                b=temp2->val;
            int A=a+b+c;
            if(A>9) c=1;
            else c=0;
            temp=temp->next=new ListNode(A%10);
            if(temp1==NULL) temp1=NULL;
            else temp1=temp1->next;
           if(temp2==NULL) temp2=NULL;
            else temp2=temp2->next;
        }
        if(c){
            temp->next=new ListNode(1);
        }
        return x->next;
    }
    
        
    
};