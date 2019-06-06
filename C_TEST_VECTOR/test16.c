#include"headerfile.h"
int fibo(int n)
{
if(n==0)
	return 0;
if(n==1)
	return 1;
if(n>1)
	return fibo(n-1) +fibo(n-2);
}
int  main()
{
int n=10,a,i=0;

while(++i <= n)
{
a = fibo(i);
printf("%d ",a);
}
puts("");
return 0;
}
