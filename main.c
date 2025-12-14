#include <stdio.h>
#include "linked_list/single_linkedlist.h"

int main() {
    Node* head = createList();
    
    // Insert elements
    head = insertEnd(head, 10);
    head = insertFront(head, 5);
    head = insertAtPos(head, 15, 1);
    
    printf("List: ");
    display(head);  // Output: 5 -> 15 -> 10 -> NULL
    
    printf("Length: %d\n", length(head));  // Output: 3
    printf("Search 15: %d\n", search(head, 15));  // Output: 1
    
    // Delete
    head = deleteFront(head);
    display(head);  // Output: 15 -> 10 -> NULL
    
    freeList(head);
    return 0;
}
