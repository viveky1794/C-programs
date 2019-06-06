#include"myheaderfile.h"

struct student *Add_end(struct student *ptr)
{
struct student *temp=NULL,*nu=NULL;
/* suppose nu = {1000(1),} */
nu = calloc(1,(cnt+1)*sizeof(*ptr));

puts("Enter the roll");
scanf("%d",&nu->roll);
puts("Enter the name");
scanf("%s",nu->name);
puts("Enter the perc");
scanf("%f",&nu->per);


if(ptr==NULL)
ptr = nu;
else
{
temp = ptr;
while(temp->link)
	temp = temp->link;
temp->link = nu;

}
return ptr;
}
