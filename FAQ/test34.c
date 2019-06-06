#include<stdio.h>
#include<string.h>
int main()
{
	int len,a,cnt=0;
	char arr[50],*p,substr[10];
	__fpurge(stdin);
	printf("Enter String\n");
	scanf("%[^\n]s",arr);

	__fpurge(stdin);

	printf("Enter Sub-String\n");
	scanf("%[^\n]s",substr);
	
	while( strstr(arr,substr) )
	{
		len = strlen(substr);
		p =  strstr(arr,substr);
		a = p - arr;
		//printf("%d %d\n",len,a);

		for(;len>0;len--)
			arr[a++]='*';

		printf("%s\n",arr); //this line is for debugging
		if(p != NULL)
			cnt++;
	}

	printf("%d\n",cnt);
	return 0;
}
