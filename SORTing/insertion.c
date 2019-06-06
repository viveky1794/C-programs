#include"headerfile.h"

void insertion(int *p,int size)
{
int i,j,temp;

for(i=1;i<size;i++)
{
j = i-1; // important line.
temp = p[i];

while(j>=0 && p[j]>temp)
{
p[j+1] = p[j];
j--;
}
p[j+1] = temp;

}
}
