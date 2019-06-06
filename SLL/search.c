#include"myheaderfile.h"

void search(struct student *ptr,int roll)
{
	struct student *temp=NULL;
	temp = ptr;
	while(temp->roll != roll)
	{
		temp = temp->link;
		if(temp==NULL)
		{
		puts("Roll no is not found in SLL");
		return;
		}
	}

	printf("%d %s %f\n",temp->roll,temp->name,temp->per);


}
