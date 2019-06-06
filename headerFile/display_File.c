#include"myheaderfile.h"
//extern int cnt;
void display(char (*db)[80]) // display only
{
	int i;
	for(i=0;i<cnt;i++)
	{
		printf("index:%d: %s\n",i,db[i]);
	}
}


