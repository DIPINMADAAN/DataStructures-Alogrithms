/* 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should print right view of tree
void rightView(Node *root)
{
   int store;
   queue <Node*> q;
   q.push(root);
   q.push(NULL);
   while(q.empty()==0)
   {
       Node* temp= q.front();
       if(temp!=NULL)
       {
            cout<<q.front()->data<<" ";
            while(q.front()!=NULL)
            {
                temp=q.front();
                if(temp->right)
                    q.push(temp->right);
                if(temp->left)
                    q.push(temp->left);
                q.pop();
            }
            q.push(NULL);
       }
        q.pop();
    }
}

