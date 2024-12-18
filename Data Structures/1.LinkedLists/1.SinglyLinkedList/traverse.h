#include <stdio.h>

void traverseLinkedList(Node *head){
    Node *current = head;

    while(current != NULL){
        printf("%d -> ", current->data);
        current = current->next;

    }

}