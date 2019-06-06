#include"headerfile.h"
#define MAX 100
int u_atoi(char *value) 
{
int i=0,a=0;

while(value[i] != '\0')
{
a = a*10 + value[i]-48;
i++;
}
return a;
}
