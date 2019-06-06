#include"headerfile.h"
#define MAX 100
int main()
{
int i=0,cnt=0,j=0;
char arr[MAX],brr[MAX];
puts("Enter 1 string");
__fpurge(stdin);
scanf("%[^\n]s",arr);
cnt = strlen(arr)-1;

puts("Enter 2 string");
__fpurge(stdin);
scanf("%[^\n]s",brr);
i = strlen(brr)-1;

if(cnt == i)
{
	while(i>=0 && cnt>=0)
	{
	if(arr[cnt] == brr[i--])
	{
	cnt--;
	
	}
	
	}
if(i == cnt)puts("Equale");	
else puts("NOT equal");
}
else 
puts("They are not equal\n");
	
	printf("\n");
return 0;
}
