#include"headerfile.h"

void in_order(struct binary *root)
{
if(root)
{
in_order(root->left);
printf("%d ",root->data);
in_order(root->right);
}

}
