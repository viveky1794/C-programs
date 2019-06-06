#include"headerfile.h"

int main()
{
char arr[MAX],brr[MAX];
int i=0,a,b;
puts("Enter  1 String");
scanf("%[^\n]s",arr);
__fpurge(stdin);
puts("Enter 2  String");
scanf("%[^\n]s",brr);

a = strlen(arr);
b = strlen(brr);


while(i<=b)
{
	arr[a++] = brr[i++];
}

printf("%s\n",arr);
return 0;
}
