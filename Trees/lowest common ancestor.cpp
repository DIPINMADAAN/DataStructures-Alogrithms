

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  bool check(Node* root,vector <Node*> *cq,int val)
  {
    if(root==NULL)
        return false;
    cq->push_back(root);
    if((root->data)==val)
        return true;
    if(check(root->left,cq,val)||check(root->right,cq,val))
        return true;
    cq->pop_back();
    return false;
  }
    
    Node *lca(Node *root, int v1,int v2) {
        vector<Node* > q1;
        vector<Node* > q2;
        check(root,&q1,v1);
        check(root,&q2,v2);
        int i;
        for(i=0;i<q1.size() && i<q2.size();i++)
        {
            if(q1[i]!=q2[i])
                break;
        }
        return q1[i-1];        
    }

