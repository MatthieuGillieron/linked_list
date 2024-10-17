
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// BASES DES LISTE CHAINER

typedef	struct Node
{
	int x;
	struct Node *next;
}	Node;


// (1er test) 

/*int main(int ac, char **av)
{
	Node root, element2;
	root.x = 5;
	root.next = &element2;
	element2.x = 22;
	element2.next = NULL;
	printf("root : %d\n", root.x);
	printf("element2 : %d\n", element2.x);
}
*/

// (2eme test)

int main(int ac, char **av)
{
	Node root;
	root.x = 2;
	root.next = malloc(sizeof(Node));
	root.next->x = 32;
	root.next->next = NULL;
	printf("1er : %d\n", root.x);
	printf("2eme : %d\n", root.next->x);
	free(root.next);
	return (0);
}
