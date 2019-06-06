#include"headerfile.h"

int main()
{
FILE *fp,*fp1;

fp = fopen("data.txt","r");
char ch,buf[MAX];
fp1 = fopen("data1.txt","w");
do
{
	ch = fgetc(fp);
	if(ch==' ')
	continue;
	fputc(ch,fp1);
}while(ch != EOF);
	
while(fscanf(fp1,"%s",buf)==1)
printf("%s\n",buf);
	return 0;
}
