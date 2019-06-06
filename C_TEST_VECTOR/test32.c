#include"headerfile.h"
#define MAX 100
int main()
{
int i=0,cnt=0;
char arr[MAX];
puts("Enter string");
scanf("%[^\n]s",arr);
cnt = strlen(arr)-1;
while(cnt>=0)
{
printf(" %c",arr[cnt--]);
}
printf("\n");
return 0;
}
