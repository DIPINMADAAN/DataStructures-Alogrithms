/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// A wrapper over leftViewUtil()
void leftView(Node *root)
{
   // Your code here
   queue<Node*> q;
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
                temp= q.front();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                q.pop();
            }
            q.push(NULL);
        }
        q.pop();
   }
}

