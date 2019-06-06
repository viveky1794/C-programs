#include"headerfile.h"

int main()
{
FILE *fp=NULL;
int i=0;
char buf[100];
fp = fopen("data.txt","r");

while(fscanf(fp,"%s",buf) == 1)
{
	i++;
}
printf("lines=%d\n",i);
fclose(fp);
return 0;
}
