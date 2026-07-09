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
        ListNode *slow=head, *fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second=slow->next, *prev=nullptr;
        slow->next=nullptr;
        while(second){
            ListNode* next=second->next;
            second->next=prev;
            prev=second;
            second=next;
        }

        ListNode* first=head;
        second=prev;
        while(second){
            ListNode* temp=first->next, *temp2=second->next;
            first->next=second;
            second->next=temp;

            first=temp;
            second=temp2;
        }
    }
};
