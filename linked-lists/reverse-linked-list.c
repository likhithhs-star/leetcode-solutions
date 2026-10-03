struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* previous = NULL;
    struct ListNode* current = head;

    while (current != NULL) {
        struct ListNode* next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    return previous;
}
