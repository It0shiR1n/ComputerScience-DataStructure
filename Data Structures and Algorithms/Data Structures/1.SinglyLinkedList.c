#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int data;
    struct Node* next;

} Node;


Node* CreateNode(int userData){
    Node* returnNode = (Node*) malloc(sizeof(Node));
    
    if(returnNode == NULL){
        return NULL;

    }

    returnNode->data = userData;
    returnNode->next = NULL;

    return returnNode;
}



void traverseLinkedList(Node *head){
    Node *current = head;

    while(current != NULL){
        printf("%d -> ", current->data);
        current = current->next;

    }

}



bool existsInLinkedList(Node *head, int target){
    Node *current = head;

    while (current != NULL){
        if(head->data == target){
            return true;

        }
       
        current = current->next;

    }

    return false;

}



int lenLinkedList(Node *head){
    int len = 0;
    Node *current = head;

    while(current != NULL){
        len++;        
        current = current->next;

    }

    return len;

}



Node *insertPos(Node *head, int position, int data){
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




int main(){    
    printf("Only a singly Linked list\n");
    return 0;

}