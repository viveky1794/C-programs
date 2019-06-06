/* 
 * This program for copying content of one file into multiple files.given into command line as agrument.
 *
 * COMPLETED YET.
 *  case 1: fgetc();
 *  case 2: fscanf();
 *  NOT COMPETED YET
 *  case 1: fgets();
 */ 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[])
{
FILE *fp,*dest;
int i=0,j=2;
char ch;

/* file is open for reading. */
fp = fopen(argv[1],"r");

/* this code is working with charterwise copying */
/*
while(j<argc)
{
dest = fopen(argv[j],"w");
while((ch=fgetc(fp))!=EOF)
{
fputc(ch,dest);
}
rewind(fp);
fclose(dest);
j++;
}

*/

/* code is working with fscanf()*/

char buf[80];
while(j<argc)
{
dest = fopen(argv[j],"w");
while((fscanf(fp,"%s",buf))==1)
{
fprntf(dest,"%s",buf);
}
rewind(fp);
fclose(dest);
j++;
}

return 0;
}
