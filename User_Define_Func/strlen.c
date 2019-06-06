#include"headerfile.h"
#define MAX 100
void u_strlen(void)
{
char arr[MAX];
int i=0,cnt=0;
puts("Enter String");
__fpurge(stdin);
gets(arr);

while(arr[i++] !='\0') cnt++;

printf("strlen=%d\n",cnt);
}
