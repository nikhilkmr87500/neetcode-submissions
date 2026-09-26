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
        ListNode* tmp1, *tmp2;
        if( head == nullptr || head->next ==nullptr) {
            return head;
        }
        if (head->next !=nullptr){
            tmp1 = head;
            head = tmp1->next;
            tmp1->next = nullptr;
        }
        while(head->next != nullptr){
            tmp2 = head;
            head = tmp2->next;
            tmp2->next = tmp1;
            tmp1 = tmp2;
        }
        if (head->next !=nullptr){
            head->next =tmp2;
        } else {
            head->next = tmp1;
        }
        return head;
    }
};
