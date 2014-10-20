#include<stdio.h>
struct node
{
	int data;
	struct node* next;
}*head;

void insert_element(int);
void delete_element(int);
void display_list(struct node *);
void size(struct node *);
void reverse(struct node **);

int main()
{
	int i, num;
	head = NULL;
	while(1)
	{
		printf("\nList Operations\n");
		printf("===============\n");
		printf("1.Insert\n");
		printf("2.Display\n");
		printf("3.Size\n");
		printf("4.Delete\n");
		printf("5.Reverse\n");
		printf("6.Exit\n");
		printf("Enter your choice : ");
		if(scanf("%d",&i)<=0){
			printf("Enter only an Integer\n");
			continue;
		} 
		else {
			switch(i)
			{
				case 1:	printf("Enter the number to be inserted.\n");
						scanf("%d", &num);
						insert_element(num);
						break;
				case 2: display_list(head);
						break;
				case 3: size(head);
						break;
				case 4: printf("Enter the element to be deleted.\n");
						scanf("%d", &num);
						delete_element(num);
						break;
				case 5:reverse(&head);
						break;
				case 6: return 0;
				default: printf("Invalid Operation.\n");
						 break;
			}
		}
	}
	return 0;
}

void insert_element(int num)
{
	struct node  *temp, *ptr;
	//temp = (struct node*)malloc(sizeof(struct node));
	temp = malloc(sizeof(struct node));
	temp->data = num;
	temp->next = NULL;
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		ptr = head;
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return;
}



void display_list(struct node *head)
{
	struct node *temp = head;
	if(head == NULL)
	{
		printf("List is empty.\n");
	}
	else
	{
		printf("The list is - \n");
		while(temp != NULL)
		{
			printf("%d\n", temp->data);
			temp = temp->next;
		}
	}
	return;
}

void size(struct node *head)
{
	struct node *temp = head;
	int count = 0;
	while(temp != NULL)
	{
		count ++;
		temp = temp->next;
	}
	printf("The size of the list is %d", count);
	return;
}

void delete_element(int num)
{
	struct node *temp, *ptr;
	ptr = head;
	if(head == NULL)
	{
		printf("Cannot Delte-->List is empty.\n");
	}
	else
	{
		if(ptr->data == num)
		{
			temp = ptr;
			head = temp->next;
			free(temp);
			return;
		}
		else
		{
			while(ptr->next != NULL)
			{
				if(ptr->next->data == num)
				{
					temp = ptr->next;
					ptr->next = temp->next;
					free(temp);
					return;
				}
				ptr = ptr->next;
			}
		}
		printf("Invalid item.\n");
	}
	return;
}
void reverse(struct node **head)
{
	struct node *p, *q, *r;
	p = *head;
	r = NULL;
	while(p != NULL)
	{
		q = p->next;
		p->next = r;
		r = p;
		p = q;
	}
	*head = r;
}



