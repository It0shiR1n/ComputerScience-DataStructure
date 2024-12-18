#include <stdio.h>
#include "len.h"
#include "DNode.h"


DNode *delete(DNode *head, int position){
    int ctrl = 1;
    int len = LenLinkedList(head);

    if(position > len || position <= 0){
        printf("[-] Have less index on the Linked list or your input is invalid");
        return head;

    }


    if(position == 1){
        DNode *newHead = head->next;
        free(head);
        return newHead;


    }else {
        DNode *current = head;

        while(current != NULL){
            if(ctrl == position){
                DNode *toDelete = current;              
 
                DNode *LastCurrent = current->last;    
                DNode *NextCurrent = current->next;    

                LastCurrent->next = NextCurrent;

                free(toDelete); 
                return head;

            }

            ctrl++;
            current = current->next;

        }
    }
}