#include"myheaderfile.h"
char *delete(char (*db)[80])
{
	int i;
	char *p;
	printf("Enter index no\n");
	__fpurge(stdin);
	scanf("%d",&i);

	memmove(db[i],db[i+1],(cnt-i-1)*sizeof(*db));
	cnt--;
	p = realloc(db,(cnt)*sizeof(*db)); // realloc automatically free the last address when we resize it.

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
