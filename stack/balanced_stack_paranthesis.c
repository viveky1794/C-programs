#include<stdio.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char);
char pop(void);

int main()
{
	char exp[MAX];
	int i=0;
	printf("Enter the expression");
	scanf("%s",exp);

	while(exp[i])
	{
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
			push(exp[i++]);

		else if(exp[i]==')')
		{		if(pop()=='(')
			{
				i++;
				continue;
			}
			else
				break;
		}
		else if(exp[i]=='}')
		{	if(pop()=='{')
			{
				i++;
				continue;
			}
			else
				break;
		}
		else if(exp[i]==']')
		{	if(pop()=='[')
			{
				i++;
				continue;
			}
			else
				break;
		}
		else
			i++;
	}


	if(top == -1 && exp[i]=='\0')
		printf("%s is valid expression\n",exp);
	else
		printf("%s is a invalid expression\n",exp);

}

void push(char ch)
{
if(top == MAX-1)
	printf("Stack is overFlow");
else
	stack[++top]=ch;

}

char pop()
{

if(top== -1)
	return -1;
return stack[top--];

}
