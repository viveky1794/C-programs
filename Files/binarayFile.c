/* code is working fine */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
FILE *src,*dest;
int size;
char *buf;
src = fopen(argv[1],"r");
dest = fopen(argv[2],"w");

fseek(src,0,2);
size = ftell(src)+1;
buf = calloc(1,size);
fread(buf,size,1,src);
fwrite(buf,size,1,dest);
fclose(src);
fclose(dest);
free(buf);
buf = NULL;
return 0;
}
