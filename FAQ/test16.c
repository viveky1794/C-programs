#include<stdio.h>


int main()
{
int no,a,b=0;
printf("Enter no\n");
scanf("%d",&no);
while(no)
{
a = no%10;

if(a%2==0)
{
b = b+a;
}
no = no/10;
}
printf("%d\n",b);
return 0;
}
