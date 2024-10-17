// AJOUTER DES ELEMENTS

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef	struct Node
{
	int x;
	struct Node *next;
}	Node;


void	insert_end(Node **root, int	value)
{
	Node *new_node = malloc(sizeof(Node));
	if (!new_node)
		return;
	new_node->next = NULL;
	new_node->x = value;
	if(!root)
	{
		*root = new_node;
		return;
	}
	Node *current = *root;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
}

int main(int ac, char **av)
{
	Node *root = malloc(sizeof(Node));
	if (!root)
		return (1);
	root->x = 15;
	root->next = NULL;

	insert_end(&root, -2);
	insert_end(&root, 342);

	Node *current = root;
	while (current != NULL)
	{
		printf("%d\n", current->x);
		current = current->next;
	}
	return (0);
}