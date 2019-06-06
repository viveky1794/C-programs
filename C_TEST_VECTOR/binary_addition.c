#include<stdio.h>
int p[32];
int add(int a,int b)
{
	int i=31,carry=0,no1,no2,bit=0;
while(i != -1)
{
no1 = carry + ((a>>bit)&1);
no2 = no1 + (!(b>>bit)&1);

if((no2 == 1) || (no2 == 0))
{
p[i--]=no2;
carry=0;
}
if(no2 == 2)
{
no2=0;
carry =1;
p[i--]=no2;
}
bit++;
}
return carry;
}

int deal(int *a,int b)
{
int no1,i=31,carry=0,bit=0;
while(i != -1)
{
no1 = a[i] + carry;
no1 = no1 +((b>>bit)&1);
if(no1==1 || no1 ==0)
{
a[i--]= no1;
carry =0;
}
if(no1 == 2)
{
	no1 =0;
	carry =1;
a[i--] = no1;
}
bit++;
}
return carry;
}

int main()
{
int a,b,carry;
a=7;
b=6;
carry=add(a,b);
printf("carry=%d\n",carry);
for(int i=0;i<32;i++)
printf("%d ",p[i]);
puts("");

while(carry==1)
carry = deal(p,1);

for(int i=0;i<32;i++)
printf("%d ",p[i]);

puts("");
return 0;
}
