#include"headerfile.h"

int digit_count(int n)
{
if(n==0 || n<10)
	return 1;
if(n>10)
	return 1+digit_count(n/10);

}
int main()
{
int n=12,a;
a = digit_count(n);
printf("%d\n",a);
return 0;
}
