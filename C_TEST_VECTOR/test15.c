/* this code is not working but probelm is not found yet. */
#include"headerfile.h"
int sum(int x)
{
if(x>0)
	return x+sum(--x);
else
	return 0;

}
int main()
{
int a;
a = sum(5);
printf("%d\n",a);
return 0;
}
