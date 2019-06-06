#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char **argv)
{
int a,i=0,size;
FILE *fp,*fp1;
char buf[100];
fp = fopen(argv[1],"r");
fp1 = fopen("data","w");

fseek(fp,0,2);
size = ftell(fp)+1;
rewind(fp);
a = strlen(argv[2]);
while(fscanf(fp,"%s",buf)==1)
{

if(strcmp(buf,argv[2]) == 0)
{
	while(i<a)
	{
	fputc('*',fp1);
	i++;
	}
i=0;
fputc(' ',fp1);
}
else
fprintf(fp1,"%s",buf); // new file
fputc(' ',fp1);
}
fclose(fp);
fclose(fp1);
remove(argv[1]);
rename("data","exam");

return 0;
}
