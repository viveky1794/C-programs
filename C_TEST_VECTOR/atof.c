#include"headerfile.h"
int power(int n,int p)
{
if(p>0)
return n*power(n,--p);
else if(p==0) return 1;
}
int main()
{
char arr[MAX];
int i=0,j=0,cnt=0;
double a=0,b=0;
puts("Enter value");
scanf("%s",arr);

while(i<strlen(arr))
{
if(arr[i] == '.')
break;
else
	i++;
}

while(j<i)
{
a = a*10+arr[j++]-48;
}

j = j+1;

while(j<strlen(arr))
{
b = b*10+arr[j++]-48;
cnt++;
}
b =(float)b/power(10,cnt);
a = a+b;
printf("double =%lf\n",a);
return 0;
}
