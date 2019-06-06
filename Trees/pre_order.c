#include"headerfile.h"

void pre_order(struct binary *node)
{
if(node)
{
printf("%d ",node->data);
pre_order(node->left);
pre_order(node->right);
}

}
