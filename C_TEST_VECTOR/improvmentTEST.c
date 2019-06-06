#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc ,char **argv)
{
char buf[100],temp[100],ch,*p;
int i,a,n,size,j,cnt=0;
i=a=n=0;
FILE *fp;

fp = fopen(argv[1],"r");

fseek(fp,0,2);
size=ftell(fp)+1;
rewind(fp);

fread(buf,size,1,fp);
a = strlen(argv[2]);

printf("BRFORE--->%s\n",buf);
while(strstr(buf,argv[2]))
{
p = strstr(buf,argv[2]);
n = p-buf;
j=n;

if(n==0) 
{
while(i<a)
{
buf[i] ='*';
i++;
}

fclose(fp);
fp = fopen(argv[1],"w");
fprintf(fp,"%s",buf);

fclose(fp);
fp = fopen(argv[1],"r");
fread(buf,size,1,fp);
i=0;
}

while(buf[j++] != ' ' )
{
cnt++;
}
if(cnt != a) break;
else
{
memmove(temp,buf+n+a,strlen(buf+n+a));

while(i<a)
{
buf[n+i]='*';
i++;
}
buf[n+i]='\0';

strcat(buf,temp);
}
i=0;
cnt=0;
}
printf("AFTER--->%s\n",buf);

return 0;
}
