#include"headerfile.h"
int digit_sum(int n)
{
	int a,b;
if(n>0)
{
a = n%10;
b = n/10;
return a+digit_sum(b);
}
else
return 0;
}

int main()
{
int n = 1234,a;
a = digit_sum(n);
printf("%d\n",a);
return 0;
}
