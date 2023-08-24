#include "lists.h"


size_t print_list(const list_t *head)
{
	size_t node_count = 1;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		if (head->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", head->len, head->str);

		head = head->next;

		node_count += 1;
	}


	printf("[%d] %s\n", head->len, head->str);

	return (node_count);
}
