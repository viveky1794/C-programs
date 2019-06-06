#include"myheaderfile.h"
//extern int cnt;
char *input(char (*db)[80]) // input funcation
{
	db = realloc(db,(cnt+1)*sizeof(*db));
	printf("Enter String\n");
	__fpurge(stdin);
	scanf("%[^\n]s",db[cnt]);
	cnt++;
	return db;
}


