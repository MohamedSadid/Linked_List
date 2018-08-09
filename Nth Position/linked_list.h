
#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#define NULL (volatile void*) 0

#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node *next;
};

void insertElement(int data, int position);

void printList();
#endif
