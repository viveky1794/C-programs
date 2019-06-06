#include"headerfile.h"
#define MAX 100
int main()
{
int i=0,cnt=0;
char arr[MAX];
puts("Enter string");
scanf("%[^\n]s",arr);
while(arr[i] != '\0')
{
printf(" %c",arr[i++]);
}
printf("\n%d\n",cnt);
return 0;
}
