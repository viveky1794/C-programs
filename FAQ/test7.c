#include<stdio.h>
// #include"types.h"
typedef unsigned long long int ULLI;
void reverse_digit(ULLI no)
{
ULLI b=0;
while(no)
{
b = b*10 + (no%10);
no =no/10;
}
printf("reverse digit=%lld",b);
}
int main()
{
	ULLI no;
printf("Enter the interger \n");
scanf("%lld",&no);

reverse_digit(no);
return 0;

}
