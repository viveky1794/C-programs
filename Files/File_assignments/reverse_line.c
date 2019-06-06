#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
FILE *fp,*dest;
char buff[100];
int cnt=0;
fp = fopen(argv[1],"r");
dest = fopen("sample","w");

while( fgets(buff,100,fp) != NULL)
{
cnt++;
if( (cnt+48) == *argv[2])
{

int len = strlen(buff) - 1-1; // 1 for null character('\0') and 1 for '\n'
for( len;len>=0;len--)
fprintf(dest,"%c",buff[len]);
fputc('\n',dest);
}
else
{
fputs(buff,dest);
}
}
//with the help of these funcation at last you will get only one file as a output which you gave in command line.
remove("test");
rename("sample","test");

fclose(dest);
fclose(fp);
return 0;
}
