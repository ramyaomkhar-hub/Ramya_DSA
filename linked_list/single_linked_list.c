#include<stdio.h>
#include<stdlib.h>
#include "single_linkedlist.h"  // ✅ CORRECT (same folder)

// 1. Create empty list
Node* createList() {
    return NULL;
}

// 2. Insert at beginning
Node* insertFront(Node* head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

// 3. Insert at end
Node* insertEnd(Node* head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) return newNode;
    Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
    return head;
}

// 4. Insert at position (0-indexed)
Node* insertAtPos(Node* head, int value, int pos) {
    if (pos == 0) return insertFront(head, value);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++) temp = temp->next;
    if (temp == NULL) return head;
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// 5. Delete from beginning
Node* deleteFront(Node* head) {
    if (head == NULL) return NULL;
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

// 6. Delete from end
Node* deleteEnd(Node* head) {
    if (head == NULL) return NULL;
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    Node* temp = head;
    while (temp->next->next != NULL) temp = temp->next;
    free(temp->next);
    temp->next = NULL;
    return head;
}

// 7. Delete at position (0-indexed)
Node* deleteAtPos(Node* head, int pos) {
    if (head == NULL || pos < 0) return head;
    if (pos == 0) return deleteFront(head);
    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++) temp = temp->next;
    if (temp == NULL || temp->next == NULL) return head;
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    free(toDelete);
    return head;
}

// 8. Search element
int search(Node* head, int value) {
    int pos = 0;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == value) return pos;
        temp = temp->next;
        pos++;
    }
    return -1;
}

// 9. Get list length
int length(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// 10. Display list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// 11. Free entire list
void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
