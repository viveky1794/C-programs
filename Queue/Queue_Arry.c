#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5

int main()
{
int Que[MAX],choice,data;
int front=-1,end=-1;


while(1)
{

puts("1:Add 2:Display 3:delete  \n");
scanf("%d",&choice);
switch(choice)
{

	case 1: 
		if(end < MAX)
		{		
		puts("enter data");
		scanf("%d",&Que[++end]);
		
		}
		else
		{
			puts("Queue is Full.\n");
		}
		break;
	case 2: 
		if((front == 0) && (end == 0))
		{
		printf("%d ",Que[front]);
		puts("\n");
		}
		else
		{
		while(front !=  end )
		printf("%d ",Que[front++]);
		puts("\n");
		front=0;
		}
		break;

	case 3:
		front++;
		break;

}
}
return 0;
}
