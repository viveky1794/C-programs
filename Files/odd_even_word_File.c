/* Program is working properly */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{char buf[80];
FILE *fp,*odd,*even;
int cnt=0;
fp = fopen(argv[1],"r");
even = fopen(argv[2],"w");
odd = fopen(argv[3],"w");
while(fscanf(fp,"%s",buf)==1)
{
cnt++;
if((cnt%2)==0)
{fprintf(even,"%s",buf);
fprintf(even,"\n");
}

else
{fprintf(odd,"%s",buf);
fprintf(odd,"\n"); }
}

fclose(fp);
fclose(odd);
fclose(even);
return 0;
}
