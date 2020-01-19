
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) { 
        queue <Node *> g;
        g.push(root);
        while(g.empty()==0)
        {
            Node* temp = g.front();
            if(temp->left)
            {
                g.push(temp->left);
            }
            if(temp->right)
            {
                g.push(temp->right);
            }
            cout<<g.front()->data<<" ";
            g.pop();
        }
    }
