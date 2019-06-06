#include<stdio.h>
int REV_DIGIT(int no)
{
static int b;
if(no==0)
	return 0;
b = b*10 + no%10;
REV_DIGIT( no/10 );
return b;
}
int main()
{
int no;
printf("Enter the NO\n");
scanf("%d",&no);

printf("%d\n",REV_DIGIT(no));

return 0;
}
