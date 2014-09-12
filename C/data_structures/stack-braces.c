#include<stdio.h>
#define MAX 10
struct stack_array{
	char a[MAX];
	int top;
};
typedef struct stack_array stack;
int if_overflow(stack *);
int if_underflow(stack *);
void push(stack *, char);
char pop(stack *);
void print_stack(stack*);
int check_matching(stack *, char s[]);

int main()
{
	stack *sk;
	char s[20];
	int val;
	sk = malloc(sizeof(stack));
	sk->top = -1;
	printf("\nEnter the expression to be checked:");
	scanf("%s", s);
	printf("\nThe entered string is: %s", s);
	val = check_matching(sk, s);
	if(val)
		printf("\nBraces match.\n");
	else
		printf("\nBraces do not match\n");
		return 0;
}

int check_matching(stack *sk, char s[20])
{
	int i = 0;
	int len = strlen(s);
	while(i < len)
	{
		if(s[i] == '(')
		{
			push(sk, s[i]);
		}
		else if(s[i] == ')')
		{
			pop(sk);
		}
		i++;
	}
	if(sk->top == -1)
		return 1;
	else
		return 0;
}

int if_overflow(stack *sk)
{

	if(sk->top == MAX-1)
		return 1;
	else
		return 0;
}
int if_underflow(stack *sk)
{
	if(sk->top == -1)
		return 1;
	else
		return 0;
}

void push (stack *sk, char c)
{
	if(if_overflow(sk))
	{
		printf("\n Not enough space. \n");
		return;
	}
	else
	{
		sk->top++;
		sk->a[sk->top] = c;
	}
}
char pop(stack *sk)
{
	/*if(if_underflow(sk))
	{
		printf("\n Stack underflow!!\n");
		return;
	}
	else
	{*/
		char c;
		c = sk->a[sk->top];
		sk->top--;
		return c;
	
}
void print_stack(stack *sk)
{
	int temp = sk->top;
	if(temp == -1)
		printf("\nThe stack is empty!");
	else
	{
	printf("The items in the stack are :\n");
	while(temp != -1)
	{
		printf("\t%c", sk->a[temp]);
		temp--;
	}
	}
}
