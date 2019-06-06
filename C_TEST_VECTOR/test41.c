#include"headerfile.h"
#define MAX 100
int main()
{
int i=0,cnt=0;
char arr[MAX],temp[MAX],*p;
puts("Enter 1 string");
scanf("%[^\n]s",arr);

puts("Enter 2 string");
scanf("%[^\n]s",temp);

while(strstr(arr+i,temp) != NULL)
{
	p=strstr(arr+i,temp);
i = p-arr+strlen(temp);
cnt++;
}


printf("%d\n",cnt);
return 0;
}
