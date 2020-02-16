#include <stdio.h>
#include <stdlib.h>

struct NODE {
	struct NODE *next;
	int data;
};

int main()
{
	struct NODE *head = malloc(sizeof(struct NODE));

	struct NODE *node1 = malloc(sizeof(struct NODE));
	head -> next = node1;
	node1 -> data = 10;
	node1 -> next = NULL;

}
