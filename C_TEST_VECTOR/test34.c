#include"headerfile.h"
#define MAX 100
int main()
{
int i=0,cnt=0,C_alph=0,L_alph=0,digit=0,spc=0;
char arr[MAX];
puts("Enter 1 string");
__fpurge(stdin);
scanf("%[^\n]s",arr);
cnt = strlen(arr)-1;
while(i<=cnt)
{
if(arr[i]>='A' && arr[i]<='Z')
C_alph++;
else if(arr[i]>='a' && arr[i]<='z')
L_alph++;
else if(arr[i]>='0' && arr[i]<='9')
digit++;
else 
	spc++;
i++;
}
printf("C_alpha=%d\n L_alpha=%d\n digit=%d\n spc=%d\n",C_alph,L_alph,digit,spc);
	printf("\n");
return 0;
}
