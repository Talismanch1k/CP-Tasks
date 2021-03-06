/*
82. Remove Duplicates from Sorted List II

Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.
*/

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
        ListNode *ans = new ListNode(0, head);
        ListNode *pre = ans;
        
        while(head!=NULL){
            if(head->next!=NULL && head->val==head->next->val){
               while(head->next!=NULL && head->val==head->next->val){
                   head=head->next;
               } 
               pre->next=head->next;
            } else pre = pre->next;
            head=head->next;
        }
        return ans->next;
    }
};
