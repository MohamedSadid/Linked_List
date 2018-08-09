
#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};


void insertElement(int);
void printList();
#endif
