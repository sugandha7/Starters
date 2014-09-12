#include<stdio.h>
#define MAX 10
struct stack_array{
	int a[MAX];
	int top;
};
typedef struct stack_array stack;
int if_overflow(stack *);
int if_underflow(stack *);
void push(stack *, int);
int pop(stack *);
void print_stack(stack*);

int main()
{
	stack *sk;
	int choice, num;
	sk = malloc(sizeof(stack));
	sk->top = -1;
	while(1)
	{
		printf("\nStack Operations\n");
		printf("===============\n");
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Display\n");
		printf("4.Exit\n");
		printf("Enter your choice : ");
		if(scanf("%d",&choice)<=0){
			printf("Enter only an Integer\n");
			continue;
		} 
		else {
		switch(choice)
		{
			case 1: printf("\nEnter the element to be inserted\n");
					scanf("%d", &num);
					push(sk, num);
					break;
			case 2: printf("\nThe deleted item is: %d\n", pop(sk));
					break;
			case 3: print_stack(sk);
					break;
			case 4: return 0;
			default: printf("Invalid option. Retry!");
					break;
		}
	}
	}
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

void push (stack *sk, int item)
{
	if(if_overflow(sk))
	{
		printf("\n Not enough space. \n");
		return;
	}
	else
	{
		sk->top++;
		sk->a[sk->top] = item;
	}
}

int pop(stack *sk)
{
	if(if_underflow(sk))
	{
		printf("\n Stack underflow!!\n");
		return;
	}
	else
	{
		int item = sk->a[sk->top];
		sk->top--;
		return item;
	}
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
		printf("\t%d", sk->a[temp]);
		temp--;
	}
	}
}
