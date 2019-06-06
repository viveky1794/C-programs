#include"headerfile.h"
int i=2;

int prime(int n)
{
if(i<n)
{
if(n%(i++)==0)
	return 1;
else
	prime(n);
}
else
return 0;

}


int main()
{

if(prime(11))
	puts("Not prime");
else
printf("prime\n");

return 0;
}
