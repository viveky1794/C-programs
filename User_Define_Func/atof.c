#include"headerfile.h"

int power(int a, int p)
{
if(p == 0)
	return 1;
return a*power(a,--p);
}

double u_atof(char *arr)
{
int i=0,a=0,cnt=0;
double b=0;
while(arr[i] != '.')
{
a = a*10 +arr[i]-48;
i++;
}
i = i+1;
while(arr[i] != '\0')
{
b= b*10 + arr[i]-48;
i++;
cnt++;
}
b = (float)b/power(10,cnt);
return a+b;
}

