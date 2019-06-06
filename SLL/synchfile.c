// Segmentation fault is coming. Don't know why ?
//
#include"myheaderfile.h"

struct student *synchfile(struct student *ptr)
{
FILE *fp=NULL;
struct student *temp=NULL,*nu=NULL,var;
fp = fopen("stu.txt","r");

while(fread(&var,sizeof(struct student)-sizeof(struct student*),1,fp))
{
nu = calloc(1,sizeof(struct student));
nu->roll = var.roll;
strcpy(nu->name,var.name);
nu->per = var.per;

if(ptr == NULL)
	ptr = nu;
else
{
temp = ptr;
while(temp ->link)
	temp = temp->link;
temp->link = nu;
}
}
fclose(fp);
return ptr;
}
