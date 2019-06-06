#include<stdio.h>

#define PRINT(a) for(a=0;a<5;a++)\
		{ \
			printf("vivek\t");\
			printf("yadav\n");\
		};

#define SQR(x) x*x
inline int sqr(int x)
{
	return x*x;
}
int main()
{
int i;
PRINT(i);;
i = 36/SQR(6);
printf("%d\n",i);
i = 36/sqr(6);
printf("%d\n",i);
return 0;
}
