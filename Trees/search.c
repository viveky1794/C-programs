#include"headerfile.h"

void search(struct binary *root,int data)
{
if(root == NULL)
	puts("data not Found");
else if(data < root->data)
	search(root->left,data);
else if(data > root->data)
	search(root->right,data);
else if(data == root->data)
	printf("data found=%d",data);

return;
}
