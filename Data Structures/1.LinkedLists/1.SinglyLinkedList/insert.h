#include <stdio.h>

#include "len.h"
#include "createNode.h"

Node *InsertPos(Node *head, int position, int data){
    size_t size = lenLinkedList(head);
    int control = 0;

    if(position > size || position < 0){
        printf("[-] the position is greather then list or invalid\n");
        return head;

    }

    Node *current = head;
    Node *newNode = CreateNode(data);
   
    if(position == 0){
        newNode->next = head;
        return newNode;

    }

    while (control != position){
        if(control == position){
            newNode->next = current->next;
            current->next = newNode;

            return head;

        }

        current = current->next;
        control++;

    }
    

}
