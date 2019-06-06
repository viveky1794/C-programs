#include"headerfile.h"

int main()
{
FILE *fp;
int size;
char *buf;
fp = fopen("data.txt","r");
fseek(fp,0,2);
size = ftell(fp)+1;
rewind(fp);

buf = calloc(1,size);

fread(buf,size,1,fp);
rewind(fp);
fclose(fp);

fp = fopen("encrypt.txt","w");
fwrite(buf,size,1,fp);
fclose(fp);

free(buf);
return 0;
}
