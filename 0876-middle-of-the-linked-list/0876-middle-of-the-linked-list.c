/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int sizeOfList(struct ListNode* head){
    int count = 0;
    struct ListNode* current = head;
    while(current != NULL){
        count++;
        current = current->next;
    }
    return count;
}

struct ListNode* middleNode(struct ListNode* head) {
    int middle = (sizeOfList(head)/2) + 1;
    struct ListNode* current = head;
    while(middle > 1){
        current = current->next;
        middle--;
    }
    return current;
}

