#include"myheaderfile.h"
record *Add_end(head *);
void display(record *);
record *Add_beg(record *);
void search(record *,int);
struct student *delete(struct student *,int);
struct student *delete_last(struct student *);
void save(struct student*);
struct student *synchfile(struct student*);
struct student *reverse(struct student*);
struct student *Add_nodeAt_N(struct student*);
struct student *fast_slow(struct student *);
int main()
{
	typedef int a;
	typedef a vivek;
	a choice;
	vivek  data;
	record *head=NULL;
	head = synchfile(head);
	while(1)
	{
		printf("1:Add_end 2:Display 3:Add_beg 4:search 5:delete 6:delete_last 7:save 8:reverse 9:Add_nodeAt_N 10:fast_slow pointer 11:exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head = Add_end(head); break;
			case 2: display(head); break;
			case 3: head = Add_beg(head); break;
			case 4: printf("Enter the roll no\n");
			       	scanf("%d",&data);
				search(head,data); break;
			case 5: printf("Enter the roll no\n");
			       	scanf("%d",&data);
				head=delete(head,data); break;
			case 6: head = delete_last(head); break;
			case 7: save(head); break;
			case 8: head = reverse(head); break;	
			case 9: head = Add_nodeAt_N(head); break;
			case 10: head=fast_slow(head); break;
			case 11: exit(0);
		}
	}
}
