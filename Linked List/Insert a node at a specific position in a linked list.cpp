// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* temp=head;
    while(position-->1 && temp!=NULL)
    {
        temp=temp->next;
    }
    SinglyLinkedListNode* node1=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    node1->next=temp->next;
    node1->data=data;
    temp->next=node1;
    return head;
}
