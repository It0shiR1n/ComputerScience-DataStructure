#include <stdlib.h>


Node *DeletePos(Node *head, int position){
    Node *current = head;
    int ctrl = 0;
    

    if (position < 0){
        return head;
        
    }

    if(position == 0){
        Node *nextNode = head->next;
        free(head);
        return nextNode;

    }

    
    while(ctrl != position){
        if(ctrl == position){
            Node *temp = current->next;
            current->next = temp->next;
            free(temp);

            return head;

        }        

        ctrl++;
    }

}
