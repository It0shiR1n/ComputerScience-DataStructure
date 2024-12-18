int lenLinkedList(Node *head){
    int len = 0;
    Node *current = head;

    while(current != NULL){
        len++;        
        current = current->next;

    }

    return len;

}