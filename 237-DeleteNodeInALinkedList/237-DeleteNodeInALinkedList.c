// Last updated: 06/09/2025, 21:28:03
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    node->val=node->next->val;
    node->next=node->next->next;
}