#include "linked_list.h"


struct node *ptrToHead = NULL;

void insertElement(int data, int position) {

    int i;

    struct node *ptrToHeap = malloc(data * sizeof(int));
    ptrToHeap -> data = data;
    ptrToHeap -> next = NULL;

    if (position == 1) {
        ptrToHeap -> next = ptrToHead;
        ptrToHead = ptrToHeap;
        return;
    }

    struct node *ptrToHeap2 = ptrToHead;
    for (i = 0; i < position - 2; i++) {
        ptrToHeap2 = ptrToHeap2 -> next;
    }

    ptrToHeap -> next = ptrToHeap2 -> next;
    ptrToHeap2 -> next = ptrToHeap;
}

void printList() {
    struct node *ptrToHeap = ptrToHead;

    while (ptrToHeap != NULL) {
        printf("%d ", ptrToHeap -> data );
        ptrToHeap = ptrToHeap -> next;
    }
}
