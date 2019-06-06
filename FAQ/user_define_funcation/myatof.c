#include<stdio.h>

int power(int a, int p)
{
if(p == 0)
        return 1;
return a*power(a,--p);
}

double myatof(char *arr)
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

int main()
{
char *arr[20];
printf("Enter the value\n");
scanf("%s",arr);

printf("%f\n",myatof(arr));
}
