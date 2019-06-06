#include"headerfile.h"
int i;
int power(int a,int p)
{
if(i>0)
	return a*power(a,--i);
else
	return 1;
}
int main()
{
	i=3;
int a = power(3,i);
printf("%d\n",a);
return 0;
}
