#include"headerfile.h"
#define MAX 100
int main()
{
int i=0,p=0,Len=0;
char arr[MAX],temp[MAX];
puts("Enter 1 string");
scanf("%[^\n]s",arr);
//cnt = strlen(arr)-1;

puts("Enter Statring position");
scanf("%d",&p);
p = p-1;
__fpurge(stdin);
puts("Length");
scanf("%d",&Len);

for(i=0;i<Len;i++,p++)
{
temp[i] = arr[p];
}

printf("%s\n",temp);
return 0;
}
