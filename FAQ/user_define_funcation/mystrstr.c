	/* code is working */

#include<stdio.h>
#include<string.h>

char *mystrstr(char *hey,const char *needle)
{
	int i,len,j=0;
	len = strlen(needle);

	for(i=0;hey[i];i++)
	{
		for(;(hey[i]==needle[j]) && (j<len);j++,i++)	
			{
				if(j==len-1)
				return hey+i;
			}
			
			j=0;
	}


	return NULL;
}
int main()
{
	char str[20],substr[10],*p;
	int i=0;
	puts("Enter str and substr");
	scanf("%s %s",str,substr);

	p=mystrstr(str,substr);
	if(p==NULL)
		puts("NULL\n");
	else
	{
	i = p-str;
	printf("%d\n",i-1);
	}
	return 0;
}
