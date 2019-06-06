#include"headerfile.h"
int i=0;
char temp[20];
int palan(char *str,int n)
{
if(i<=n)
{
temp[i] = str[n-i];
i++;
 palan(str,n);
}
}
int main()

{
	int a;
char str[20]="aaaaa";
a =  strlen(str)-1;
palan(str,a);
temp[i]='\0';
if(strcmp(temp,str)==0)
	puts("Yes apalandrom");
else
	puts("NO");
return 0;
}
