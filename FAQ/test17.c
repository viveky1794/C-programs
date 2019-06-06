#include<stdio.h>


int main()
{
int no,a,b=0,cnt=0;
printf("Enter no\n");
scanf("%d",&no);
while(no)
{
a = no%10;
cnt++;
if(cnt==2)
{
b = b+a;
cnt=0;
}
no = no/10;
}
printf("%d\n",b);
return 0;
}
