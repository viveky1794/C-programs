/* it is  working but not properly. why is so checkout ? */

#include"myheaderfile.h"

struct student *fast_slow(struct student *head)
{
struct student *slowptr=head,*fastptr=head;

while(slowptr->link && fastptr->link)
{
slowptr = slowptr->link;
fastptr = fastptr->link->link;
if(slowptr == fastptr) break;
}
printf("slowptr=%d,%s\n",slowptr->roll,slowptr->name);
printf("fastptr=%d,%s\n",fastptr->roll,fastptr->name);
return head;

}
