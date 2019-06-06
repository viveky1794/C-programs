#include<stdio.h>

int myatoi(char *value)
{
int i=0,a=0;

while(value[i] != '\0')
{
a = a*10 + value[i]-48;
i++;
}
return a;
}

int main()
{
char arr[30];
printf("Enter value\n");
scanf("%s",arr);

printf("%d\n",myatoi(arr)+1);
}
