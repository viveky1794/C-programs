#include<stdio.h>

int divide(int nu, int de) 
{
	int temp = 1;
	int quotient = 0;

	while (de <= nu) 
	{
		de <<= 1;
		temp <<= 1;
	}

	while (temp > 1) 
	{
		de >>= 1;
		temp >>= 1;

		if (nu >= de) 
		{
			nu -= de;
			quotient += temp;
		}
	}
	return quotient;
}

int main()
{
	int nu,de;
	printf("Enter numerator and denomteror\n");
	scanf("%d %d",&nu,&de);

	printf("%d\n",divide(nu,de));
	return 0;
}

