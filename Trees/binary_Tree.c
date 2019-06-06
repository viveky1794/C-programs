#include"headerfile.h"

struct binary *insert(struct binary *,int);
void pre_order(struct binary *);
void post_order(struct binary *);
void in_order(struct binary *);
void findmin(struct binary *);
void search(struct binary *,int);
int main()
{
	struct binary *root=NULL;
int choice,data;
while(1)
{
puts("\n1:Insert 2:Pre-order 3:Post-order 4:In-order 5:Find-Min 6:search ");
scanf("%d",&choice);
switch(choice)
{

	case 1: puts("enter data");
		scanf("%d",&data);
		root = insert(root,data); break;
	case 2: pre_order(root); break;
	case 3: post_order(root); break;
	case 4: in_order(root); break;
	case 5: findmin(root); break;
	case 6:
		puts("enter data");
		scanf("%d",&data);
		search(root,data); break;
}


}


return 0;
}
