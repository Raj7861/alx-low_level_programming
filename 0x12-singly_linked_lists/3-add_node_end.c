#include "lists.h"


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t string_length = 0;


	if (str == NULL)
		string_length = 0;

	while (str[string_length] != '\0')
		string_length++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = string_length;
	new_node->next = NULL;


	temp = *head;


	if (temp == NULL)
		*head = new_node;
	else
	{

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
