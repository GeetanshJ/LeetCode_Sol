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
        vector<ListNode*>arr;
        while(headA != nullptr){
            arr.push_back(headA);
            headA = headA->next;
        }

        while(headB != nullptr){
            if(find(arr.begin(),arr.end(),headB) != arr.end()){
                return headB;
            }

            headB = headB->next;
        }

        return headA;
    }
};