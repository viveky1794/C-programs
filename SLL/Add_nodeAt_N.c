/* case 1: Error msg if SLL is empty
 * case 2: Error msg if node is beyond the limit of SLL count.
 */

#include"myheaderfile.h"

struct student *Add_nodeAt_N(struct student *ptr)
{
int ps,cnt=0;
struct student *temp=ptr,*Pptr=NULL,*nu=NULL;
puts("Enter position to add node");
scanf("%d",&ps);
//ps = ps-1; // when ps =1 case will fail.
if(ptr == NULL)
{	puts("SLL is empty");
return temp;
}


while(ptr)
{
cnt++;
if(cnt == ps) break;
Pptr = ptr;
ptr = ptr->link;
}

if(ptr == NULL){printf("Not enough entries in SLL\nTotal Entries are %d\n",cnt); return temp;}

nu = calloc(1,sizeof(struct student));
puts("Enter roll");
scanf("%d",&nu->roll);
puts("Enter name");
scanf("%s",nu->name);
puts("Enter per");
scanf("%f",&nu->per);

if(ps == 1)
{
nu->link = ptr;
return nu;
}

if(ps != 1)
{
nu->link =  Pptr->link;
Pptr->link = nu;
}
return temp;
}
