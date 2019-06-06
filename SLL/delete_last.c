/* delete last node */

#include"myheaderfile.h"

struct student *delete_last(struct student *ptr)
{
struct student *temp=NULL,*pre=NULL;
temp = ptr;

if(temp == NULL)
{
puts("SLL is empty");
return ptr;
}
while(temp->link !=NULL)
{
pre = temp;
temp = temp->link;
}	
free(temp);
pre->link = NULL;

return ptr;

}
