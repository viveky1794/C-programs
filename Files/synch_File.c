#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int cnt;
int main(int argc,char **argv)
{
FILE *Sync;
char buf[MAX],*hold=NULL;

Sync = fopen(argv[1],"r");

if(Sync==NULL)
{
puts("Error");
exit(0);
}

while(fgets(buf,MAX,Sync)) // it return NULL while fail to read from file.
{
hold = realloc(hold,(cnt+1)*sizeof(buf));
strcat(hold,buf);
cnt++;
}

fprintf(stdout,"%s",hold);
free(hold);
hold = NULL;
//free(buf); // we are trying to free that area which is not from HEAP. Array has the address of stack;
//buf = NULL; // buf will atomatically free because it from heap area.
}
