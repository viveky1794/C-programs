#include"headerfile.h"
int i=0;
int search(char *arr,int n)
{
if((i++)<=n)
{
if(arr[i]>='A' && arr[i]<='Z')
	return 1;
else
	return search(arr,n);

}

return 0;

}

int main()
{
char arr[100] = "myheaderfile";
int size = strlen(arr)-1;

if(search(arr,size))
	printf("Capital latter\n");
else
	puts("NO cappital");
return 0;
}
