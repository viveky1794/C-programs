#include"myheaderfile.h"

struct student *reverse(struct student *ptr)
{
	struct student *Pptr=NULL,*Cptr=NULL,*Nptr=NULL;
Nptr = ptr;
while(Nptr)
{ 
	Pptr = Cptr;
	Cptr =Nptr;
	Nptr = Nptr->link;
	Cptr->link = Pptr;
}

ptr = Cptr;
return ptr;
}
