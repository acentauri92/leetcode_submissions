/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *previous, *current, *next;
    //Empty list
    if(head == NULL){
        return NULL;
    }
    previous = NULL;
    current = head;

    while(current != NULL){
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
  return previous;
}