#include"headerfile.h"
int facto(int n)
{
if(n>=0)
{
if(n==0) return 1;
else
return n * facto(n-1);
}
}
int main()
{
int a = facto(4);
printf("%d\n",a);

return 0;
}
