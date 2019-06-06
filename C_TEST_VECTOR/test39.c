#include"headerfile.h"
#define MAX 100
int main()
{
int i=0,p=0,Len=0;
char arr[MAX],temp[MAX];
puts("Enter 1 string");
scanf("%[^\n]s",arr);
//cnt = strlen(arr)-1;
__fpurge(stdin);
puts("Enter 2 string to search");
scanf("%[^\n]s",temp);

if(strstr(arr,temp))
puts("Found");
else
puts("NOT found");

printf("%s\n",temp);
return 0;
}
