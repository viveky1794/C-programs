#include<stdio.h>
int facto(int no)
{
if((no==0) || (no ==1))
	return 1;
return (no*facto(no-1)); // don't use pre and post operators in recursion.
}
int main()
{
int no;
printf("enter the no\n");
scanf("%d",&no);
no = facto(no);

printf("%d\n",no);
return 0;

}
