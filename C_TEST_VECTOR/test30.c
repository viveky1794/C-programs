#include"headerfile.h"
#define MAX 100
int main()
{
int i=0,cnt=0;
char arr[MAX] = "VIVEK";
while(arr[i++] != '\0')
{
cnt++;
}
printf("%d\n",cnt);
return 0;
}
