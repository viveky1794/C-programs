#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
char **ptr,*temp;
int i,j,a,b;
FILE *fp;
fp = fopen(argv[1],"r");
ptr =(char **)calloc(5,sizeof(*ptr));

ptr[0] = calloc(1,100);
i=0;
while(fgets(ptr[i],100,fp)!=NULL)
	ptr[++i] = calloc(1,100);


	for(i=0;i<5;i++)
	{
	j = i-1;
	temp = ptr[i];
	while(j>=0 && strlen(ptr[j])>strlen(temp))
	{
	ptr[j+1] = ptr[j];	
	j--;	
	}
	ptr[j+1] = temp;
	}


for(i=0;i<5;i++)
	printf("%s",ptr[i]);

puts(" ");
return 0;
}
