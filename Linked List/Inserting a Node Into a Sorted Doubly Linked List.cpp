// Complete the sortedInsert function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* newnod(int val)
{
    DoublyLinkedListNode* temp=(DoublyLinkedListNode*) malloc(sizeof(DoublyLinkedListNode));
    temp->data=val;
    temp->next=NULL;
    temp->prev=NULL;
        return temp;
}
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* temp=head;
    DoublyLinkedListNode* newnode = newnod(data);
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    while(temp->next!=NULL)
    {
        if(temp->data>data)
        {
            newnode->next=temp;
            temp->prev=newnode;
            head=newnode;
            return head;
        }
        else if(temp->next->data>=data)
        {
            newnode->next=temp->next;
            temp->next->prev=newnode;
            newnode->prev=temp;
            temp->next=newnode;
            newnode->prev=temp;
            return head;
        }
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}
    newnode->next=NULL;
    return head;

}
