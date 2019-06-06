#include<stdio.h>
#include<string.h>
char *mystrcat(char *arr,char *brr)
{
int i,j=0;
i = strlen(arr);
do
{
arr[i++] = brr[j];
}while(brr[j++] !='\0');
}

int main()
{
char arr[30],brr[30];

printf("Enter the arr and brr\n");
scanf("%s %s",arr,brr);

mystrcat(arr,brr);
printf("%s\n",arr);

}
