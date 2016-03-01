#include <stdio.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

typedef struct node Tree;

void insert_tree(Tree **, int);
void inorder(Tree *);
void delete_tree(Tree **, int);
Tree** find_min(Tree **);

int main()
{
	Tree *root = NULL;
	insert_tree(&root, 10);
	insert_tree(&root, 15);
	insert_tree(&root, 6);
	insert_tree(&root, 7);
	insert_tree(&root, 18);
	insert_tree(&root, 20);
	printf("\n The inorder traversal of the tree is \n");
	inorder(root);
	delete_tree(&root, 10);
	printf("\n The inorder traversal of the tree after deletion is \n");
	inorder(root);

	}

void insert_tree(Tree **node, int num)
{
	Tree *new_node;
	if(*node == NULL)
	{
		new_node = malloc(sizeof(Tree));
		new_node->data = num;
		new_node->left = NULL;
		new_node->right = NULL;
		*node = new_node;
		return;
	}
	else{
		if ((*node)->data > num)
		{
			insert_tree(&(*node)->left, num);
		}
		else
		{
			insert_tree(&(*node)->right, num);
		}
	}
}

void inorder(Tree *node)
{
	if(node != NULL)
	{
		inorder(node->left);
		printf("%d\t", node->data);
		inorder(node->right);
	}
}

Tree** find_min(Tree **node)
{
	Tree **temp = node;
	while((*temp)->left != NULL)
	{
		temp = &(*temp)->left;
	}
	return temp;
}

void delete_tree(Tree **node, int num)
{
	if((*node) == NULL)
	{
		printf("\nInvalid Operation.");
	}
	else if((*node)->data >num)
	{
		delete_tree(&(*node)->left, num);
	}
	else if((*node)->data <num)
	{
		delete_tree(&(*node)->right, num);
	}
	else
	{
		if((*node)->right == NULL)
		{
			Tree *temp = (*node)->left;
			free(*node);
			*node = temp;
		}
		else if((*node)->left == NULL)
		{
			Tree *temp = (*node)->right;
			free(*node);
			*node = temp;
		}
		else
		{
			Tree **successor = find_min(&(*node)->right);
			(*node)->data = (*successor)->data;
			delete_tree(successor, (*successor)->data);
		}
	}
	return;
}
		



