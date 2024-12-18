#include <stdlib.h>

Node* CreateNode(int userData){
    Node* returnNode = (Node*) malloc(sizeof(Node));
    
    if(returnNode == NULL){
        return NULL;

    }

    returnNode->data = userData;
    returnNode->next = NULL;

    return returnNode;
}
