#include"headerfile.h"
void binary(int n)
{
int a,b;
a = n%2;
b = n/2;
if(b!=0) binary(b);
printf("%d",a);
}

int main()
{
binary(5);
puts("");
return 0;

}
