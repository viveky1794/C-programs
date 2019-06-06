#include<stdio.h>
#define MAX 5


int main()
{
int i,j,n=0;
char ch;
for(i=1;i<=MAX;i++,puts(""))
{	ch = 'A'; 
	for(j=MAX;j>0;j--)
	{	
		if(j<=i) printf("%c ",ch++);
		else printf(" ");
	
	}
	--ch;
	for(j=1;j<i;j++)
	{	--ch;
		printf("%c ",ch);

	}
}
}



/*
int main()
{
int i,j,n=0;
for(i=1;i<=MAX;i++,puts(""))
{ 
	for(j=0;j<i;j++)
	{	
		if((i+j)%2)
		printf("%d",1);
		else
		printf("%d",0);
	}
}
}
*/
/*
int main()
{
int i,j,n=1;
for(i=1;i<=MAX;i++,puts(""))
{ 
	for(j=0;j<i;j++)
	printf("%d",n++);
}
}
*/

/*
int main()
{
int i,j;
for(i=1;i<=MAX;i++,puts(""))
{
	for(j=1;j<=MAX;j++)
	{	if(j<=i)printf("%d",i);
		else printf(" ");
	}
}
}
*/
/*
int main()
{
int i,j;
for(i=1;i<=MAX;i++,puts(""))
{
	for(j=1;j<=MAX;j++)
	{	if(j<=i)printf("%d",j);
		else printf(" ");
	}
}
}
*/

/*
int main()
{
int i,j;
for(i=1;i<=MAX;i++,puts(""))
{
	for(j=MAX;j>0;j--)
	{	if(j>i)printf(" ");
		else printf("* ");
	}
}
}

*/
