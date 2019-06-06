#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fp=NULL;
char *buf[20];
fp= fopen("data.txt","r");


while(fgets(buf,20,fp))
printf("%s",buf);


fclose(fp);
return 0;
}
