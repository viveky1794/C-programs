#include"headerfile.h"

int main()
{
char arr[100]="ViVek";
char ch;
int i=0;
while(i<strlen(arr))
{
	ch = islower(arr[i])?toupper(arr[i]):tolower(arr[i]);
printf("%c",ch);
i++;
}
puts("");
return 0;
}
