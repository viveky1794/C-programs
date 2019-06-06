#include"headerfile.h"

int main()
{
char arr[MAX];
int i=0;
puts("Enter String");
scanf("%s",arr);

while(i<strlen(arr))
{
if((arr[i]>='a' && arr[i]<='z') ||(arr[i]>='A' && arr[i]<='Z'));
else
memmove(arr+i,arr+i+1,strlen(arr)-i);

i++;
}

printf("%s\n",arr);
return 0;
}
