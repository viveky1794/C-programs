#include"headerfile.h"

void remove_extra(void);
int main()
{
int choice;
while(1)
{

puts("1:Remove extra Spaces");
scanf("%d",&choice);
switch(choice)
{

	case 1:// puts("Enter File name");
		//scanf("%s",file_name);
		remove_extra();
	       	break;


}
}



return 0;
}
