/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {

    struct ListNode *tortoise, *hare;
    tortoise = hare = head;

    //Tortoise and hare algorithm
    while((hare != NULL) && (hare->next != NULL)){
        tortoise = tortoise->next;
        hare = hare->next->next;

        if(hare == tortoise){
            return true;
        }
    }
    return false;
}