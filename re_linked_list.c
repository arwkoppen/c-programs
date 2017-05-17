#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int key;
	struct node *next;
}node;

node *head = NULL;

void addNode(int key)
{
	node *link = (node*) malloc(sizeof(node));
	link -> key = key;

	link -> next = head;
	head = link;
}

void printList()
{
	node *ptr = head;
	while(ptr != NULL)
	{
		printf("%d\n", ptr -> key);
		ptr = ptr -> next;
	}
}

void deleteFirst()
{
	node *ptr = head;
	head = head -> next;

	free(ptr);
}

int main()
{
	addNode(10);
	addNode(20);

	printList();

	deleteFirst();

	printList();
	return 0;
}