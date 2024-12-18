#include <stdio.h>
#include "DNode.h"


int LenLinkedList(DNode *head){
    int c = 1;

    DNode *current = head;
    while (current->next != NULL){
        c++;
        current = current->next;
        
    }

    return c;
}
