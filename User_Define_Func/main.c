#include"headerfile.h"
#define MAX 100
void u_strlen(void);
void u_strcmp(void);
void u_strcpy(void);
void u_strcat(void);
int u_atoi(char *);
double u_atof(char *);
int u_strstr(char *,char *);

int main()
{
	int choice,i,j;
	char arr[MAX],brr[MAX];
	int p;
	double d;
	while(1)
	{
		puts("1:strlen 2:strcmp 3:strcpy 4:strcat 5:strstr 6:memmove 7:atoi 8:atof");
		scanf("%d",&choice);
		switch(choice)
		{

			case 1: u_strlen(); break;
			case 2: u_strcmp(); break;
			case 3: u_strcpy(); break;
			case 4: u_strcat(); break;
			case 5: puts("Enter string");
				__fpurge(stdin);
				scanf("%[^\n]s",arr);
				puts("Enter Sub-string");
				__fpurge(stdin);
				scanf("%[^\n]s",brr);
				p=u_strstr(arr,brr);
				printf("substing postion start counting from zero=%d\n",p);
				break;
			case 6:
				puts("Enter string");
			       __fpurge(stdin);
			       scanf("%[^\n]s",arr);
			       
			       puts("index no 1");
			       __fpurge(stdin);
			       scanf("%d",&i);

			       puts("Enter 2nd string");
			       __fpurge(stdin);
			       scanf("%[^\n]s",brr);
			       
			       puts("index no 2");
			       __fpurge(stdin);
			       scanf("%d",&j);

				u_memmove(arr+i,brr+j,strlen(brr)-j);
				printf("%s\n",arr);

				break;
			case 7: puts("Enter string");
				__fpurge(stdin);
				scanf("%[^\n]s",arr);
				p=u_atoi(arr);
				printf("%d\n",p);
				break;
			case 8: puts("Enter string");
				__fpurge(stdin);
				scanf("%[^\n]s",arr);
				d=u_atof(arr);
				printf("%lf\n",d);
				break;

		}

	}
}
