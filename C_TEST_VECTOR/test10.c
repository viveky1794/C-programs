#include"headerfile.h"

int main()
{
FILE *fp;
char *buf[100];
int i=0;
fp = fopen("data.txt","r+");

fseek(fp,0,2);

fputs("\n",fp);

while(i++ < 3)
{
printf("ENter line %d\n",i);

__fpurge(stdin);
fgets(buf,100,stdin);
//scanf("%[^\n]s",buf); // this is also working.but previos one is better then this.because we are directly storing data into file.
fputs(buf,fp);
fputs("\n",fp);
}


return 0;
}
