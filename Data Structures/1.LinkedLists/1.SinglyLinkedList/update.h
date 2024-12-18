#include <stdio.h>

#include "len.h"
    
Node *UpdatePos(Node *head, int position, int newData){
    size_t size = lenLinkedList(head);
    int ctrl = 0;

    if(position > size || position < 0){
        printf("[-] Position out of range or invalid\n");
        return head;

    }

    Node *current = head;

    while(ctrl != position){
        if(ctrl == position){
            current->data = newData;
            return head;

        }
        
        current = current->next;
        ctrl++;

    }
 
    current->data = newData;
    return head;

}
