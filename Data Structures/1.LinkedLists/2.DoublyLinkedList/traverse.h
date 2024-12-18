#include <stdio.h>
#include "DNode.h"


void traverseLinkedList(DNode *head){
    DNode *current = head;

    while(current != NULL){
        printf("Data %d\n", current->data);
        current = current->next;

    }

}