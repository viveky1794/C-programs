#include<stdio.h>

int main()
{

int n=10,i;
int arr[n];
srand(stdin);
for(int j=0;j<10;j++)
arr[j]=rand()%100;

for(i=0;i<10;i++)
printf("%d ",arr[i]);
/*
int brr[50]={1,2,3,[10]=5,[20]=20};

for(i=0;i<50;i++)
printf("%d ",brr[i]);
*/
return 0;
}
