/* this program is for stack single link list.
 *
 * status: working all case
 *
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student 
{
	int roll;
	char name[20];
	struct student *next;
};

struct student *add(struct student *);
void display(struct student *);
struct student *delete(struct student *head);
int main()
{
	struct student *head=NULL,*last=NULL;
	int choice;
	while(1)
	{

		printf("1:add 2:display 3:delete 4:exit\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: if(head == NULL)
				{
					last = add(last);
					head = last;       
				}
				else
					last = add(last);

				break;
			case 2: display(head); break;
			case 3: last=delete(head);
			       if(last == NULL)
			       head = NULL;
		 		break;
			case 4: exit(0);

		}
	}

	return 0;
}

struct student *add(struct student *last)
{
	struct student *temp=NULL;

	if(last ==  NULL)
	{
		temp = calloc(1,sizeof(struct student));

		puts("Enter roll");
		scanf("%d",&temp->roll);
		puts("Enter name");
		scanf("%s",temp->name);

	}
	else
	{

		temp = calloc(1,sizeof(struct student));

		puts("Enter roll");
		scanf("%d",&temp->roll);
		puts("Enter name");
		scanf("%s",temp->name);
		last->next = temp;

	}
	return temp;
}

void display(struct student *head)
{
	if(head == NULL)
	{
		puts("Stack is empty\n");
		return;
	}
	else
	{
		while(head)
		{

			printf("%d %s\n",head->roll,head->name);
			head = head->next;
		}
		puts("");
	}
}

struct student *delete(struct student *head)
{
	struct student *temp=NULL;
	if(head == NULL)
	{
	puts("Stack is Empty\n");
	return NULL;
	}

	if(head->next == NULL)
	{
		free(head);
		return NULL;

	}
	else
	{
		while(head->next)
		{
			temp=head;
			head = head->next;
		}

		head->next = NULL;
		free(head);
		temp->next = NULL;
	return temp;
	}
}
