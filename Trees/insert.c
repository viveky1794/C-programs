#include"headerfile.h"

struct binary *insert(struct binary *root,int data) 
{
	struct binary *new = NULL;
if(root == NULL)
{
new = calloc(1,sizeof(struct binary));
new->data = data;
root = new;
return root;
}
else if(data < root->data)
	root->left = insert(root->left,data);
else if(data > root->data)
	root->right = insert(root->right,data);
else
printf("%d is already present in BST\n",data);

return root;
}
