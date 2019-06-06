#include"headerfile.h"
#define MAX 100
int main()
{
int i=0,cnt=0;
int vowel=0,consonant=0;
char arr[MAX]="vivek",brr[MAX];
puts("Enter 1 string");
__fpurge(stdin);
scanf("%[^\n]s",arr);
cnt = strlen(arr)-1;

while(i<=cnt)
{
if((arr[i]>='A' && arr[i]<='Z') ||    (arr[i]>='a' && arr[i]<='z'))
{

if((arr[i]=='a' || arr[i]=='A') || (arr[i]=='e' || arr[i]=='E') || (arr[i]=='i' || arr[i]=='I') || (arr[i]=='o' || arr[i]=='O') || (arr[i]=='u' || arr[i]=='U'))
vowel++;
else
	consonant++;

}
i++;

}
printf("vowel=%d\nconsonant=%d\n",vowel,consonant);
return 0;
}
