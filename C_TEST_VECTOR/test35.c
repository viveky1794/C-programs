#include"headerfile.h"
#define MAX 100
int main()
{
int i=0,cnt=0;
char arr[MAX]="vivek",brr[MAX];
puts("Enter 1 string");
__fpurge(stdin);
scanf("%[^\n]s",arr);
cnt = strlen(arr)-1;

strcpy(brr,arr);
printf("--%s\n",brr);
return 0;
}
