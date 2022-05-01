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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        if(!head) return head;
        map<int,int> mp;
        while(temp!=NULL){
               mp[temp->val]++;
            temp=temp->next;
        }
        for(auto x:mp){
            if(x.second==1)
                v.push_back(x.first);
        }
        ListNode* new_head=NULL;
        ListNode* ptr;
        for(int i=0;i<v.size();i++){
            if(new_head==NULL){
                new_head=new ListNode(v[i]);
                ptr=new_head;
            }
            else{
                ptr->next=new ListNode(v[i]);
                ptr=ptr->next;
            }
        }
        return new_head;
    }
    
};