#include <stdio.h>
#include "len.h"
#include "DNode.h"

DNode *insert(DNode *head, DNode *newNode, int position){
    int ctrl = 1;
    int len = LenLinkedList(head);
    

    if (position > len || position <= 0){
        printf("[-] Have less index on the Linked list or your input is invalid");
        return head;

    }

    if(position == 1) {
        newNode->next = head;

        if(head != NULL){
            head->last = newNode;

        }

        newNode->last = NULL;
        return newNode;


    }else if (position == len){
        DNode *current = head;

        while (current->next != NULL){
            current = current->next;

        }

        current->next = newNode;                             
        newNode->last = current;

        return head;

    }else {
        DNode *current = head;

        while (current->next != NULL){
            if(ctrl == position){
                DNode *reserve = current;            
                current = newNode;                   
  
                current->last = reserve;              
                current->next = reserve->next;       

                return head;

            }

            ctrl++;
            current = current->next;

        }
    }
}
