#include"headerfile.h"

int main()
{
FILE *fp=NULL,*fp1=NULL;
char buf[100];
fp = fopen("data.txt","r");
fp1 = fopen("data1.txt","w");

while(fscanf(fp,"%s",buf) == 1)
{
fprintf(fp1,"%s",buf);
fputs("\n",fp1);
}
fclose(fp);
fclose(fp1);
return 0;
}
