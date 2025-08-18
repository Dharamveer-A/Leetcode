// Last updated: 18/08/2025, 23:40:42
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
        ListNode *temp=head;
        int c=0;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
        c/=2;
        temp=head;
        for(int i=0; i<c; i++){
            temp=temp->next;
        }
        return temp;
    }
};