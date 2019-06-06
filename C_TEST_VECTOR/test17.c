#include"headerfile.h"
#define MAX 6
void array_pf(int *arr,int n)
{
if(n<MAX)
{
printf("%d ",arr[n++]);
array_pf(arr,n);
}
puts("");
return;
}

int main()
{
int arr[MAX]={2,4,6,8,10,12};
array_pf(arr,0);
return 0;
}
