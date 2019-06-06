#include<stdio.h>

int main()
{
int no,a=0,b;
printf("Enter data\n");
scanf("%d",&no);
b = no;
while(no)
{
a = a*10+ no%10;
no/=10;
}
if(a == b)
	puts("YES,Palindrum");
else
	puts("NO,Palindrum");

return 0;
}
