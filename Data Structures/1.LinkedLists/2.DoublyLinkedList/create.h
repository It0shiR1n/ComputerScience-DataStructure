#include <stdlib.h>

DNode *createNode(int data){
    DNode *node = (struct DNode*) malloc(sizeof(struct DNode*));

    node->data = data; 
    node->last = NULL;
    node->next = NULL;

    return node;

}