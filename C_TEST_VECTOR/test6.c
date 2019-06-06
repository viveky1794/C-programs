#include"headerfile.h"

int main()
{
FILE *fp=NULL;
int i=0;
char buf[100];
fp = fopen("data.txt","r");

while(fgets(buf,100,fp))
{
	i++;
}
printf("lines=%d\n",i);

i=0;
rewind(fp);

while(fscanf(fp,"%s",buf)==1)
	i++;
printf("word=%d\n",i);
i=0;
rewind(fp);

fseek(fp,0,2);
i=ftell(fp);
printf("chareater=%d\n",i);

fclose(fp);
return 0;
}
