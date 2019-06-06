#include"headerfile.h"
#define MAX 100
int main()
{
int i=0,cnt=0,j=0;
char arr[MAX],temp;
puts("Enter 1 string");
scanf("%[^\n]s",arr);
cnt = strlen(arr)-1;

printf("%s\n",arr);
for(j=0;j<=cnt;j++)
{
for(i=0;i<=cnt-1;i++)
{
if(arr[i]>arr[i+1])
{
temp = arr[i];
arr[i] = arr[i+1];
arr[i+1] = temp;
}
}
}

printf("%s\n",arr);
return 0;
}
