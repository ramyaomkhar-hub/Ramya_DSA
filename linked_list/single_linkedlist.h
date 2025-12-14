#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function prototypes
Node* createList();
Node* insertFront(Node* head, int value);
Node* insertEnd(Node* head, int value);
Node* insertAtPos(Node* head, int value, int pos);
Node* deleteFront(Node* head);
Node* deleteEnd(Node* head);
Node* deleteAtPos(Node* head, int pos);
int search(Node* head, int value);
int length(Node* head);
void display(Node* head);
void freeList(Node* head);

#endif
