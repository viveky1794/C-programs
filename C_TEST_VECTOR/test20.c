#include"headerfile.h"
#define MAX 6
int i=1;
int large(int *arr,int n)
{
if(i<MAX)
{
if(n<arr[i])
{
n = arr[i];
i++;
return large(arr,n);
}
else
{
i++;
return large(arr,n);
}
}

return n;
}
int main()
{
int a,b;
int arr[MAX] = {1,2,5,4,3,6};

b = arr[0];
a = large(arr,b);
printf("%d\n",a);
return 0;
}
