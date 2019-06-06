#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
FILE *fp=NULL;
char *string = "my name is vivek",*dest=NULL;
fp = fopen("test.txt","w+");

fwrite(string,strlen(string),1,fp);

int size = ftell(fp);
rewind(fp);
dest = calloc(1,size);
fread(dest,size,1,fp);

printf("%s\n",dest);
fclose(fp);
free(dest);
return 0;
}
