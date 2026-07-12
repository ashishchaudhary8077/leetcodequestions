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
    ListNode* middleNode(ListNode* head) {

        int length = 0;
        ListNode* temp = head;

        while(temp != NULL){
            length++;
            temp = temp->next;
        }

        int k = length / 2 + 1;

        temp = head;    

        int cnt = 1;
        while(cnt < k){
            temp = temp->next;
            cnt++;
        }

        return temp;
    }
};