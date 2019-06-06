#include"headerfile.h"
#include<ctype.h>
int main()
{
	int cnt=0;
char arr[]="The quick for \n try to jump on \n a lazy dog";
while(isprint(arr[cnt]))
{
putchar(arr[cnt]);
cnt++;
}

puts("\n");
}
