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
    int length(ListNode* head){
        int len = 0;
        while(head != nullptr){
            len++;
            head = head->next;
        }

        return len;
    }

    ListNode* reverseLL(ListNode* head, int k) {
        if(head == nullptr) return head;
        int len = length(head);

        if(k > len){
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* forward = curr->next;
    
        int i = 0;
        while(i < k){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            i++;
        }

        if(forward != nullptr){
            head->next = reverseLL(forward,k);
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        return reverseLL(head,k);
    }
};