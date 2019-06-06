#include"myheaderfile.h"
//extern int cnt;
void save(char (*db)[80])
{
	int i;
	FILE *fp;
	fp = fopen("data.txt","w+");
	for(i=0;i<cnt;i++)
	{
		fputs(db[i],fp);
		fputc('\n',fp);
	}
}


