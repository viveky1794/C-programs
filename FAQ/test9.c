#include<stdio.h>


int main()
{
	while(1)
	{
		int no,a,b=1;
		printf("Enter integer\n");
		scanf("%d",&no);

		if(!(no%2))
		{
			a = no/2;
			for(int i=0;i<a;i++)
			{	
				b = b*2;

				if (b>=no) break;
			}

			if(b == no)
				puts("Power of 2");
			else
				puts("Not");
		}
	}
	return 0;
}
