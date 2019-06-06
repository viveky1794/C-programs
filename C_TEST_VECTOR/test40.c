#include"headerfile.h"
#define MAX 100
int main()
{
int i=0,p=0,cnt=0;
char arr[MAX],temp[MAX];
puts("Enter 1 string");
scanf("%[^\n]s",arr);
cnt = strlen(arr)-1;
printf("%d\n",cnt);
while(i<=cnt)
{
if(arr[i]>='A' || arr[i]<='Z')
arr[i] = arr[i]+32;

if(arr[i]>='a' || arr[i]<='z')
arr[i] = arr[i]-32;

i++;
}


printf("%s\n",arr);
return 0;
}
