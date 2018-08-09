#include "linked_list.h"

struct node *ptrToHead = NULL;

void insertElement(int x){
    struct node *ptrToHeap = malloc(x * sizeof(int));

    ptrToHeap -> data = x;
    ptrToHeap -> next = ptrToHead;
    ptrToHead = ptrToHeap;
}

void printList(){
    struct node *ptrToHeap = ptrToHead;

    while (ptrToHeap != NULL) {
        printf("%d ", ptrToHeap -> data);
        ptrToHeap = ptrToHeap -> next;
    }
    printf("\n");
}
