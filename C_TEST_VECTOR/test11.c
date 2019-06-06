#include"headerfile.h"

int main()
{
FILE *fp,*fp1;
char buf[100];
fp = fopen("data.txt","r");
fp1 = fopen("merge.txt","w");
while(fgets(buf,100,fp))
{
	fputs(buf,fp1);
}
fclose(fp);

fp = fopen("data1.txt","r");
while(fgets(buf,100,fp))
{
	fputs(buf,fp1);
}
fclose(fp);

return 0;
}
