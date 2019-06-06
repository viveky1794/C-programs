/* This program is  for Stack application .
 *
 * status: working 
 *
 */
#include"headerfile.h"



int main()
{

int choice,i=-1,data;
int stack[MAX],top=-1;
while(1)
{
printf("1:add 2:display 3:delete \n");
puts("Enter your choice");
scanf("%d",&choice);
switch(choice)
{
	case 1: 
		puts("Enter value");

		if(top != MAX-1)
		{
		scanf("%d",&stack[++top]);
		
		}
		else	
		{
		puts("stack is FULL\n");
		}
	       	break;
	case 2: if(top == -1)
		{puts("stack is empty\n");}
		else
		{
		while(i != top)
		{
		printf("%d ",stack[++i]);
		}
		puts("\n");
		}
		i=-1;
		break;
	case 3: if(top == -1)
		puts("Stack is empty");
		else
		printf("Poped data=%d\n",stack[top--]);

		break;
}
}
return 0;
}
