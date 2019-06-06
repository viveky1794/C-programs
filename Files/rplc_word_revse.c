#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv)
{
FILE *fp,*fp1;
int l,i,j=0;
char buf[20],revse[20];

fp = fopen(argv[1],"r");
fp1 = fopen("test.txt","w");

l=strlen(argv[2]);
for(i=l-1;i>=0;i--)
{
revse[j] = argv[2][i];
j++;
}
revse[j]='\0';
while(fscanf(fp,"%s",buf)==1)
{
if(strcmp(argv[2],buf)==0)
{	fprintf(fp1,"%s ",revse);
continue;
}
fprintf(fp1,"%s ",buf);

}
fprintf(fp1,"\n");
fclose(fp);
fclose(fp1);
remove(argv[1]);
rename("test.txt","data.txt");
return 0;
}
