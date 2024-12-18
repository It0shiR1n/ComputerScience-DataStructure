#include <stdio.h>
#include "len.h"
#include "DNode.h"

DNode *update(DNode *head, int newData, int position){
    int ctrl = 1;    
    int len = LenLinkedList(head);

    if(position > len || position <= 0){
        printf("[-] Have less index on the Linked list or your input is invalid");
        return head;

    }

    if(position == 1){
        head->data = newData;
        return head;

    }else {
        DNode *current = head;

        while(current != NULL){
            if(ctrl == position){
                current->data = newData;
                return head;

            }

            ctrl++;
            current = current->next;

        }
    }
}