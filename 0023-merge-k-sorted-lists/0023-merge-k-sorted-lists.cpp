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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* a = nullptr;
        for(int i =0;i<lists.size();i++){
            ListNode temp(0);
            ListNode* current = &temp;
            ListNode*list1 = a;
            ListNode*list2 = lists[i];
            while(list1 != nullptr && list2!= nullptr){
                if(list1->val<=list2->val){
                    current->next = list1;
                    list1 = list1->next;
                }
                else{
                    current->next = list2;
                    list2 = list2->next;
                }
                current = current->next;
            }
            if(list1!= nullptr){
                current->next = list1;
            }
            else{
                current->next = list2;
            }
            a = temp.next;
        }
        return a;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna