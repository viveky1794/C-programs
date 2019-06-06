#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fp=NULL;
char buf[100];
int cnt=0;
fp = fopen("data.txt","w");

while(cnt<4)
{
puts("Enter line");
__fpurge(stdin);
scanf("%[^\n]s",buf);
cnt++;
fputs(buf,fp);
fputs("\n",fp);
}
fclose(fp);
return 0;
}
