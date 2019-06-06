
#include"headerfile.h"
#define MAX 10 
void input(int *,int);
void display(int *,int);
void bubble(int *,int);
void selection(int *,int);
void insertion(int *,int);
void merge(int *,int,int,int);
void mergesort(int *,int,int);

int main()
{
int arr[MAX],choice;
input(arr,MAX);
display(arr,MAX);
while(1)
{

puts("1:Bubble Sort 2:Selection sort 3:Insertion sort 4:merge 5:quick 6:Heap");
scanf("%d",&choice);
switch(choice)
{
	case 1: bubble(arr,MAX); display(arr,MAX); break;
	case 2: selection(arr,MAX); display(arr,MAX); break;
	case 3: insertion(arr,MAX); display(arr,MAX); break;
	case 4: mergesort(arr,0,MAX);
	       	for(int i=1;i<=MAX;i++)
	       printf("%d ",arr[i]);
		puts("");
			break;


}

}


return 0;
}
