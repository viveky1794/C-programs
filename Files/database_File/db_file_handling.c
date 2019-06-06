/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt=0;
char *input(char (*)[]);
void display(char (*)[]);
void save(char (*)[]);
char *synch_file(char (*)[]);
char *delete(char (*)[]);
char *sorting(char (*)[]);
*/
#include"myheaderfile.h"
//extern int cnt;
int main()
{
	int choice;
	char (*db)[80] = NULL;
	db = synch_file(db);
	while(1)
	{

		printf("1:input 2:display 3:save 4:delete 5:sorting string 6:exit\n");
		__fpurge(stdin);
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: db = input(db); break;
			case 2: display(db); break;
			case 3: save(db); break;
			case 4: db = delete(db); break;
			case 5: db = sorting(db); break; //BUG: 1:Input 2:Save 3:Sort 4:save //output must be sorted but it is not. 
			case 6: return 0;
		}
	}
	fcloseall();
	free(db);

	return 0;
}
/*
char *synch_file(char (*db)[80])
{
	FILE *fp;
	char buf[80];
	fp = fopen("data.txt","r");
	while(fgets(buf,80,fp))
	{
		buf[strlen(buf)-1] = '\0';
		db = realloc(db,(cnt+1)*sizeof(*db));
		strcpy(db[cnt],buf);
		cnt++;
	}
	return db;
}

char *input(char (*db)[80]) // input funcation
{
	db = realloc(db,(cnt+1)*sizeof(*db));
	printf("Enter String\n");
	__fpurge(stdin);
	scanf("%[^\n]s",db[cnt]);
	cnt++;
	return db;
}

void display(char (*db)[80]) // display only
{
	int i;
	for(i=0;i<cnt;i++)
	{
		printf("index:%d: %s\n",i,db[i]);
	}
}

void save(char (*db)[80])
{
	int i;
	FILE *fp;
	fp = fopen("data.txt","w+");
	for(i=0;i<cnt;i++)
	{
		fputs(db[i],fp);
		fputc('\n',fp);
	}
}

char *delete(char (*db)[80])
{
	int i;
	char *p;
	printf("Enter index no\n");
	__fpurge(stdin);
	scanf("%d",&i);

	memmove(db[i],db[i+1],(cnt-i-1)*sizeof(*db));
	cnt--;
	p = realloc(db,(cnt)*sizeof(*db));

	return p;
}

char *sorting(char (*db)[80])
{
	char temp[80];
	int i,j,arr[20],count=0,p;
	for(i=0;i<cnt;i++)
	{
		arr[i] = strlen(db[i]);
	}
	printf("\n");

	for(i=0;i<cnt;i++)
	{j=i;
		while(j<cnt)
		{
			if(arr[i]>arr[j])
			{
				memmove(temp,db[i],sizeof(*db));
				memmove(db[i],db[j],sizeof(*db));
				memmove(db[j],temp,sizeof(*db));
				p = arr[i];
				arr[i] = arr[j];
				arr[j] = p;
				j=i; continue;
			}
			j++;
		}
	}
return db;
}
*/
