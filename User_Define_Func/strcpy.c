#include"headerfile.h"
#define MAX 100
void u_strcpy(void)
{
char arr[MAX],brr[MAX];
int i=0;
puts("Enter string");
__fpurge(stdin);
scanf("%[^\n]s",arr);

do
{
brr[i]=arr[i];

}while(brr[i++] !='\0');
puts("Copy Successfully");
printf("%s\n",brr);
}
