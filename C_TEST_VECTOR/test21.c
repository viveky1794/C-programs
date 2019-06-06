#include"headerfile.h"
void reverse(char *str,int a)
{
if(0<=a-1)
{
printf("%c",str[a-1]);
reverse(str,a-1);
}

}
int main()
{
char str[50]= "vivekyadav & shiva";
int a = strlen(str);
reverse(str,a);
puts("");
return 0;
}
