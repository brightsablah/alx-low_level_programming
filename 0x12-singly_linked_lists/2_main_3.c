#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _free_list - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void _free_list(list_t *head)
{
	if (head)
	{
		_free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	char *strings[3] = {
		"",
		"School",
		NULL
	};
	list_t *ptr;
	int i;
	size_t n;

	head = NULL;
	for (i = 0; strings[i]; ++i)
	{
		ptr = add_node(&head, strings[i]);
		if (!ptr || !ptr->str)
		{
			printf("Failed\n");
			_free_list(head);
			return (1);
		}
		if (ptr->str == strings[i])
		{
			printf("A copy of the string should be stored\n");
			return (1);
		}
	}
	n = print_list(head);
	printf("-> %lu elements\n", n);
	_free_list(head);
	return (0);
}
