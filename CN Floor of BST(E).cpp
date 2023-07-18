int Floor(BinaryTreeNode<int> *root, int x)
{
	int f=-1;
	if(root==NULL)return f;
	while(root){
		if(root->data==x)return root->data;
		if(root->data<x){
			f=root->data;
			root=root->right;
		}
		if(root->data>x)root=root->left;
	}
	return f;
}
