#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
struct Stack
{
	int top;
	int maxSize;
	int *arrey;
};
struct Stack* create(int max)
{
	struct Stack* stack;
	stack=(struct Stack*)malloc(sizeof(struct Stack));
	stack->maxSize = max;
	stack->top=-1;
	stack->arrey=(int*)malloc(stack->maxSize * sizeof(int));
	return stack;
}
int isFull(struct Stack* stack)
{
	if(stack->top==stack->maxSize-1)
	{
		printf("Stack is Full.\n");
	}
	return stack->top==stack->maxSize-1;
}
int isEmpty(struct Stack * stack)
{
	if(stack->top==-1)
	{
		printf("Stack is Empty.\n");
	}
	return stack->top==-1;
}
void push(struct Struct* stack,int item)
{
	if(isFull(stack))
	{
		return;
	}
	stack->arrey[++stack->top]=item;
}
int pop(struct Stack* struct)
{
	if(isEmpty(stack))
	{
		return INT_MIN;
	}
	return stack->arrey[stack->top--];
}
int peek(struct Stack* stack)
{
	if(isEmpty(stack))
	{
		return INT_MIN;
	}
	return stack->array[stack->top];
}
int checkoperand(char ch)
{
	return(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z');
}
int precedency(char ch)
{
	switch (ch)
	{
		case '+':
		case '-':
			return 1;
		
		case '*':
		case '/':
			return 2;
			
		case '^':
			return 3;
	}
	return -1;
}
int getprefix(char* expression)
{
	int i,j;
	struct Stack* stack=create(strlen(exprssion));
	if(!stack)
	{
		return -1;
	}
	for(i=0,j=-1;expression[i];++i)
	{
		if(cheakoperand(expression[i]))
		{
			expression[++i]=expression[i];
		}
		else if(expression[i]=='(')
		{
			push(stack,expression[i]);
		}
		else if(expression[i]==')')
		{
			while(!isEmpty(stack)&&peek(stack)!='(')
			{
				expression[++j]=pop(stack);
			}
			if(!isEmpty(stack)&& peek(stack)!='(')
			{
				return -1;
			}
			else
			{
				pop(stack);
			}
		}
		else
		{
			while(!isEmpty(stack)&& precedency(expression[i])<=precedency(peek(stack)))
			{
				expression[++j]=pop(stack);
			}
			push(stack,expession[i]);
		}
	}
	while(!isEmpty(stack))
	{
		expession[++j]=pop(stack);
	}
	expression[++j]='\0';
}
void reverse(char *exp)
{
	int size=strlen(exp);
	int j=size,i=o;
	char temp[size];
	temp[j--]='\0';
	while(exp[i]!='\0')
	{
		temp[j]=exp[i];
		j--;
		i++;
	}
	strcpy(exp,temp);
}
void brackets(char*exp)
{
	int i;
	while(exp[i]!='\0')
	{
		if(exp[i]=='(')
		{
			exp[i]=')';
		}
		else if(exp[i]==')')
		{
			exp[i]='(';
		}
		i++;
	}
}
void InfixtoPrefix(char *exp)
{
	int size=strlen(exp);
	reverse(exp);
	brackets(exp);
	getprefix(exp);
	reverse(exp);
}
int main()
{
	printf("Enter the infix expression.");
	char expression[]="((a/b)+c)-(d+(e*f))";
	printf("%s",expression);
	InfixtoPrefix(expression);
	
	printf("The Prefix is:");
	peintf("%s",expression);
	return 0;
}
