#include"headerfile.h"

void post_order(struct binary *root)
{
if(root)
{
post_order(root->left);
post_order(root->right);
printf("%d ",root->data);
}

}
