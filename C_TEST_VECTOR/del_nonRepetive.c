#include<stdio.h>
#include<string.h>
#define MAX 100
int  main()
{
	int i=0,j=0,a;
char arr[MAX];
printf("Enter String\n");
scanf("%s",arr);
a = strlen(arr);
for(i=0;i<a;i++)
{
j=i+1;
while(arr[i] != arr[j])
{
j++;
if(arr[j] == '\0')
break;
}
if(arr[j]== '\0')
{	
memmove(arr+i,arr+i+1,strlen(arr+i+1));
}
printf("%s\n",arr);
}
return 0;
}
