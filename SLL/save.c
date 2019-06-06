#include"myheaderfile.h"

void save(struct student *ptr)
{
FILE *fp=NULL;

fp  = fopen("stu.txt","w");
if(ptr == NULL)
{
puts("SLL is empty");
return;
}
while(ptr)
{
	fwrite(ptr,sizeof(struct student)-sizeof(struct student*),1,fp);
	ptr = ptr->link;

}
fclose(fp);
puts("Successfull data saved in file");
}
