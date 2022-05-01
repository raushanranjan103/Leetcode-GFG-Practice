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
     ListNode* reverseList(ListNode* head) {
        ListNode* pNode = head;
        ListNode* prev = nullptr;
         ListNode* next = head;
        while(pNode != nullptr){
            next = pNode->next;
            pNode->next = prev;
            prev = pNode;
            pNode= next;
        }
    return prev;
    }
};