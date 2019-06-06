#include"headerfile.h"
#define MAX 100
void u_strcat(void)
{
char arr[MAX],brr[MAX];
int i,j=0;
puts("Enter 1st string");
__fpurge(stdin);
scanf("%[^\n]s",arr);
puts("Enter 2st string");
__fpurge(stdin);
scanf("%[^\n]s",brr);

i = strlen(arr);

do
{
arr[i] = brr[j++];

}while(arr[i++] !='\0');

printf("%s\n",arr);
}
