// PARCOUCRIR LES LISTES CHAINEES

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef	struct Node
{
	int x;
	struct Node *next;
}	Node;

int main(int ac, char **av)
{
	Node root;
	root.x = 15;
	root.next = malloc(sizeof(Node));
	root.next->x = 2;
	root.next->next = malloc(sizeof(Node));
	root.next->next->x = 42;
	root.next->next->next = NULL;
	Node *current = &root;
	while (current != NULL)
	{
		printf("%d\n", current->x);
		current = current->next;
	}
	free(root.next->next);
	free(root.next);
}