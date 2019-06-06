#include"myheaderfile.h"

void display(struct student *ptr)
{
	puts("**********************************");
	if(ptr == NULL)
	{
		puts("SLL is Empty");
	}
	while(ptr)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->per);
		ptr = ptr->link;
	}
	puts("**********************************");
}
