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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>arr;

        while(list1 != nullptr && list2 != nullptr){
            if(list1->val < list2->val){
                arr.push_back(list1->val);
                list1 = list1->next;
            }

            else if(list1->val > list2->val){
                arr.push_back(list2->val);
                list2 = list2->next;
            }

            else if(list1->val == list2->val){
                arr.push_back(list1->val);
                arr.push_back(list2->val);
                list1 = list1->next;
                list2 = list2->next;
            }
        }

        while(list1 != nullptr){
            arr.push_back(list1->val);
            list1 = list1->next;
        } 
        
        while(list2 != nullptr){
            arr.push_back(list2->val);
            list2 = list2->next;
        }

        ListNode* current = new ListNode();
        ListNode* ans = current;
        for (int i = 0; i < arr.size(); i++) {
            current->next = new ListNode(arr[i]);
            current = current->next;
        }
    
        return ans->next;
    }
};