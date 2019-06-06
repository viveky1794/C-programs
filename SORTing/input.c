#include"headerfile.h"

void input(int *arr,int size)
{
int i;
srand(getpid());

for(i=0;i<size;i++)
arr[i] = rand()%100;

}
