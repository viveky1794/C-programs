#include<stdio.h>
#include<string.h>
#define MAX 100
int my_strcasestr(char *arr,char *brr)
{
char arr_new[MAX],brr_new[MAX];
int i,j=0,a;

a= strlen(brr);


for(i=0;arr[i] !='\0';i++,j++)
{
if(arr[i]>='A' && arr[i]<='Z')
	arr_new[j] = arr[i]+32;
else
	arr_new[j] = arr[i];
}
j=0;
for(i=0;brr[i] !='\0';i++,j++)
{
if(brr[i]>='A' && brr[i]<='Z')
	brr_new[j] = brr[i]+32;
else
	brr_new[j] = brr[i];

}
j=0;

for(i=0;arr[0] != '\0';i++)
{
if(arr_new[i] != brr_new[j]);
else
{
i++;
j++;

while(arr_new[i] == brr_new[j])
{
i++;
j++;
if(j==a)
{
	
return (i-a);
}
}
j=0;
}

}

return 0;
}
int main()
{
	char arr[MAX],brr[MAX],*p;
int n=0;
	puts("Enter 1st string");
//	gets(arr);
	scanf("%[^\n]s",arr);
__fpurge(stdin);
puts("Enter 2nd string");
//	gets(brr);
scanf("%[^\n]s",brr);
n=my_strcasestr(arr,brr);
printf("%d\n",n);
return 0;
}
