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
