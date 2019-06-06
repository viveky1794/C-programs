#include<stdio.h>
void binary(int no);

int main()
{
	int pos1,pos2,no,cnt=0,a,b;
	printf("Enter number\n");
	scanf("%d",&no);
	printf("Enter 1st bit position\n");
	scanf("%d",&pos1);
	printf("Enter 2nd bit position\n");
	scanf("%d",&pos2);

	binary(no);
	a = (no &(1<<pos1));
	b = (no &(1<<pos2));
	//printf("a=%d,b=%d\n",a,b);
	if((a>0 && b>0) || (a==0 && b==0));
	else
	{
		no = ~(no^(~(1<<pos1)));
		no = ~(no^(~(1<<pos2)));
		puts("\nSWAP");
		binary(no);
	}
	printf("\n%d\n",no);

	return 0;
}
void binary(int no)
{

	int cnt=0;

	for(int i=31;i>=0;i--)
	{
		printf("%d",((no>>i)&1));
		cnt++;
		if(cnt==4)
		{
			printf(" ");
			cnt=0;
		}
	}
}
