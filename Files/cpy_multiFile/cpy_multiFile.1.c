/*	this is working partially 
 *
 *
 */
#include<stdio.h>
#include<string.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
FILE *fp,*dest;
char *buf;
int size,i=0;

fp = fopen(argv[1],"r");
if(fp==NULL) printf("NULL\n");
fseek(fp,0,2);
size = ftell(fp)+1;
rewind(fp);
fread(buf,size,1,fp);

for(i=2;i<argc;i++)
{
dest = fopen(argv[i],"w");
fwrite(buf,size,1,dest);
fclose(dest);
}

return 0;
}
