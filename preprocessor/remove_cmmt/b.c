#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print(char *q);
int main()
{
	char ch,ch1,ch2;
	int i=0,cnt=0;
	FILE *fp,*dest;
/* open file into file pointer */
	fp = fopen("a.c","r");
	
	dest = fopen("c.c","w");
	do{
	//buf = realloc(buf,(cnt+1)); // buf = {1000,}
	
	ch1 = fgetc(fp);
	ch2 = fgetc(fp);
	if(ch1=='/' && ch2 == '/')
	{	while((ch = fgetc(fp))!='\n');}
	else
	{
	fseek(fp,-2,1);
	ch = fgetc(fp);
	fputc(ch,dest);
	}
	ch = fgetc(fp);
	fputc(ch,dest);
	}while(ch!=EOF);
	fclose(fp);

	
	return 0;

}

