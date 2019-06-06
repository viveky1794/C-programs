#include"myheaderfile.h"

struct student *Add_beg(struct student *ptr)
{

struct student *temp=NULL;

temp = calloc(1,sizeof(struct student));

puts("enter roll no");
scanf("%d",&temp->roll);
puts("enter name");
scanf("%s",temp->name);
puts("enter perct");
scanf("%f",&temp->per);


temp->link = ptr;

return temp;

}
