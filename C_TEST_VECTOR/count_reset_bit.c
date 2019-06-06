#include<stdio.h>

int main()
{
 int a,bit,n,cnt=0;
a=100;
for(bit=0;bit<=32;bit+=2)
{
n=(a>>bit)&3;
if(n==0)
cnt++;

}
printf("cnt=%d\n",cnt-1);
return 0;
}
