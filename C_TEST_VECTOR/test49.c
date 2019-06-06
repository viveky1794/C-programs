#include<stdio.h>
#include<string.h>
char *g()
{
static char x[1024];
return x;

}
int main()
{
char *g1 = "First";

strcpy(g(),g1);
printf("%s\n",g());
g1 = g();
strcpy(g1,"second string");
printf("%s\n",g());
}
