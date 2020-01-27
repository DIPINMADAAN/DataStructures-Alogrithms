void zigZagTraversal(Node* root)
{
	stack <Node* > s1;
	stack <Node* > s2;
	s1.push(root);
	while(s1.empty()==0 || s2.empty()==0)
	{
	    while(s1.empty()==0)
	    {
	        cout<<s1.top()->data<<" ";
	        if(s1.top()->left){s2.push(s1.top()->left);}
	        if(s1.top()->right){s2.push(s1.top()->right);}
	        s1.pop();
	    }
	    while(s2.empty()==0)
	    {
	        cout<<s2.top()->data<<" ";
	        if(s2.top()->right){s1.push(s2.top()->right);}
	        if(s2.top()->left){s1.push(s2.top()->left);}
	        s2.pop();
	    }
	}cout<<endl;
	
	// Code here
}
