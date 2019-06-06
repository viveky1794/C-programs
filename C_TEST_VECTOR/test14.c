#include"headerfile.h"
int i;
void netural_no(void)
{
i++;
if(i<=50)
{
printf("%d ",i);
netural_no();
}
return;
}
int main()
{
netural_no();
puts("");
return 0;
}
