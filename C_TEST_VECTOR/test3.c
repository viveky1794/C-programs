#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char **argv)
{
FILE *fp;
char *str="ls",file[80],*rev=NULL,viv[20];
int n,i=0;
fp = fopen(argv[1],"r+");

/*
while(fscanf(fp,"%s",file)==1)
{
if(strcmp(file,str)==0)
{	printf("Word FOUND\n");

n=strlen(str);
n=n+2;
fseek(fp,-n,0);
n=strlen(str);
while(i != n)
{
rev[i]  = file[i]-32;
fputc(rev[i],fp);
i++;
}
i=0;
printf("changed\n");

}
}
*/

return 0;
}

