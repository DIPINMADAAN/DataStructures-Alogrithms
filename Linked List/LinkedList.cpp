#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	node* next;
};
node* newnode(int val)
{
	node* temp=(node*) malloc(sizeof(node));
	temp->data=val;
	temp->next=NULL;
		return temp;
}
node* insertelementend(node* head, int val)
{
	node* temp=newnode(val);
	node* temp1=head;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
	}
	return head;
}
node* insertelementbeg(node* head, int val)
{
	node* node1=newnode(val);
	node1->next=head;
	head=node1;
	return head;
 }
node* insertran(node* head,int val, int index)
{
	node* temp=head;
	if(index==1)
	{
		insertelementbeg(temp,val);
	}
	else{
	
	node* node1=newnode(val);
	while(index-->2 && temp!=NULL)
	{
		temp=temp->next;
	}
	node1->next=temp->next;
	temp->next=node1;
	return head;}
}

node* deletebegin(node* head)
{
	node* temp=head;
	head=temp->next;
	return head;
  }
node* deleteend(node* head)
{
	node* temp=head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=NULL;
	return head;
}
node* deleteran(node* head, int index)
{
	node* temp=head;
	if(index==1)
	{
		head=deletebegin(temp);
	}
	else
	{
	while(index-->2 && temp!=NULL)
	{
		temp=temp->next;
	}
	temp->next=temp->next->next;}
	return head;
}
    
void print(node* head)
{
	node* temp=head;
	cout<<temp<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		cout<<temp->next<<endl;
		temp=temp->next;
	}
 } 

int main()
{
	node* node1=newnode(3);//node* node1=NULL;
	node1=insertelementend(node1,7);
	node1=insertelementend(node1,8);
	node1=insertelementend(node1,10);
	node1=insertelementbeg(node1,2);
	node1=insertran(node1,4,1);
	node1=deletebegin(node1);
	node1=deleteend(node1);
	node1=deleteran(node1,1);
	print(node1);
	return 0;
}
