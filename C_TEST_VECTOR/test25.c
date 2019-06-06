#include"headerfile.h"
int i=1;
void even(int n)
{
if(i<=n)
{
if(i%2 != 0)
{
printf("%d ",i++);
even(n);
}
else
{
	i++;
	even(n);
}
}
}
int main()
{

even(10);
return 0;
}
