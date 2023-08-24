#include "lists.h"



size_t list_len(const list_t *head)
{
	size_t node_count = 1;


	if (head == NULL)
		return (0);


	while (head->next != NULL)
	{

		head = head->next;

		node_count++;
	}

	return (node_count);
}
