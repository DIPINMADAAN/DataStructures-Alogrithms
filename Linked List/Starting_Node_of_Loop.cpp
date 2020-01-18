// C++ program to return first node of loop. 
#include <bits/stdc++.h> 
using namespace std; 
  
struct Node { 
    int key; 
    struct Node* next; 
}; 
Node* newNode(int key) 
{ 
    Node* temp = new Node; 
    temp->key = key; 
    temp->next = NULL; 
    return temp; 
} 
void printList(Node* head) 
{ 
    while (head != NULL) { 
        cout << head->key << " "; 
        head = head->next; 
    } 
    cout << endl; 
} 
Node* detectAndRemoveLoop(Node* head) 
{
	if(head!=NULL)
	{
		int flag=0;
		Node* fast=head;
		Node* slow=head;
		while(fast!=NULL || fast->next!=NULL)
		{
			fast=fast->next->next;
			slow=slow->next;
			if(fast==slow)
			{
				fast=head;
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			while(fast!=NULL)
			{
				fast=fast->next;
				slow=slow->next;
				if(fast==slow)
				{
					return slow;
				}	
			}
		}
		else 
		{ 
			return NULL;
		}
	}
	else 
		return NULL;      
} 
  
/* Driver program to test above function*/
int main() 
{ 
    Node* head = newNode(50); 
    head->next = newNode(20); 
    head->next->next = newNode(15); 
    head->next->next->next = newNode(4); 
    head->next->next->next->next = newNode(10); 
  
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next; 
  
    Node* res = detectAndRemoveLoop(head); 
    if (res == NULL) 
        cout << "Loop does not exist"; 
    else
        cout << "Loop starting node is " << res->key; 
  
    return 0; 
} 
