#include"myheaderfile.h"
//extern int cnt;
char *synch_file(char (*db)[80])
{
	FILE *fp;
	char buf[80];
	fp = fopen("data.txt","r");
	while(fgets(buf,80,fp))
	{
		buf[strlen(buf)-1] = '\0';
		db = realloc(db,(cnt+1)*sizeof(*db));
		strcpy(db[cnt],buf);
		cnt++;
	}
	return db;
}

