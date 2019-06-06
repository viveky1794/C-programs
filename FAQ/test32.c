#include<stdio.h>
#include<stdlib.h>
int main()
{
int no,cnt=1,a,i=0,temp,j,k,*arr=NULL;
printf("Enter data\n");
scanf("%d",&no);
while(no)
{
a = no%10;
arr = realloc(arr,(cnt++)*sizeof(int));
arr[i++] = a;
no/=10;
}

for(j=0;j<i;j++)
{
for(k=j;k<i;k++)
{
if(arr[j]>arr[k])
{
temp = arr[j];
arr[j] = arr[k];
arr[k] = temp;
}
}
}
for(j=0;j<i;j++)
printf("%d ",arr[j]);
free(arr);
arr = NULL;
return 0;
}
