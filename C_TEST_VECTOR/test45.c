#include"headerfile.h"

int main()
{
char arr[MAX],brr[MAX];
int i=0,a,b;
puts("Enter  1 String");
scanf("%[^\n]s",arr);

a = strlen(arr);

while(i<a)
{
if(arr[i]== ' ')
{
	arr[i] = '*';
}
i++;
}
printf("%s\n",arr);
return 0;
}
