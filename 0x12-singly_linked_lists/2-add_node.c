#include "lists.h"

/**
 * slen - Calculates the length of a string.
 * @str: string
 * Return: The length of the string
*/
int slen(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node - Creates a node and adds it to a linked list
 * @head: Pointer to head of the linked list
 * @str: String to assigned to the node
 * Return: Pointer to the head of the linked list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL) /*Initialzes the next pointer to NULL*/
		new_node->next = NULL;
	else /*Moves the new node to the head*/
		new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = slen(str);
	*head = new_node;
	return (*head);#include "lists.h"

/**
 * slen - Calculates the length of a string.
 * @str: string
 * Return: The length of the string
*/
int slen(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 *add_node_end - adds a new node at the end of a list_t.
 *@head: pointer to head element.
 *@str: string to be duplicated
 *
 *Return: address of the new element.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = slen(str);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;

		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}

	return (newNode);
}
