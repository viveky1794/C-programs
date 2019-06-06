#include"headerfile.h"

void findmin(struct binary *root)
{
if(root->left == NULL)
	printf("min=%d\n",root->data);
else
	findmin(root->left);
return;
}
