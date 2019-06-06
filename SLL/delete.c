/* Delete by Roll number */

#include"myheaderfile.h"

struct student *delete(struct student *ptr,int roll)
{

	struct student *temp=NULL,*pre=NULL;
	temp = ptr;

	if(temp==NULL)
	{
	puts("SLL is empty");
	return ptr;
	}
	while(temp->roll != roll)
	{
	pre = temp;
	temp = temp->link;
	if(temp == NULL)
	{
	puts("Roll no is not found");
	return ptr;
	}
	
	}

	pre->link = temp->link;
	
	temp->link = NULL;
	free(temp);
return ptr;

}
