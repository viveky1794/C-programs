#include"headerfile.h"
#define MAX 100

void u_strcmp(void)
{
	int i,j,cnt=0;
	char arr[MAX],brr[MAX];

	puts("Enter 1st string");
	__fpurge(stdin);
	scanf("%[^\n]s",arr);
	
	puts("Enter 1st string");
	__fpurge(stdin);
	scanf("%[^\n]s",brr);

	i=strlen(arr);
	j=strlen(brr);

	if(i==j)
	{
		while((cnt < j) && (arr[cnt]==brr[cnt++]));
		if(cnt==i)
			puts("Equal");
		else
			puts("Unequal");
	}
	else
		puts("Not equal");

}
