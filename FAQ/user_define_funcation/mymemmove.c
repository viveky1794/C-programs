#include<stdio.h>
#include<string.h>

void *mymemmove(char *arr,const char *brr,int no)
{
int i=0,j=0;

while(j<=no)
{
arr[i]=brr[j];
i++;
j++;
}
return arr;
}

int main()
{
char arr[30],brr[30],*Arr;
printf("Enter str\n");
scanf("%s %s",arr,brr);

mymemmove(arr+3,brr+2,sizeof(brr+2));
printf("Nstr %s\n",arr);

}





