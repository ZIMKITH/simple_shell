#include "shell.h"

/**
 * Add_sep_node_end - ADDED Partition found at the end.
 * of a sep_NODE
 * @head: Leader of the Linked list.
 * @sep: Devider  found ($ | %).
 * Return: address of the LEADER
 */
sep_list *add_sep_node_end(sep_list **head, char sep)
{
		sep_list *new, *temp;

			new = malloc(sizeof(sep_list));
				if (new == NULL)
							return (NULL);

					new->separator = sep;
						new->next = NULL;
							temp = *head;

								if (temp == NULL)
										{
													*head = new;
														}
									else
											{
														while (temp->next != NULL)
																		temp = temp->next;
																temp->next = new;
																	}

										return (*head);
}

/**
 * Free_sep_list - Sep_list Freed.
 * @head: Leaders of Linked list.
 * Return: ZERO
 */
void free_sep_list(sep_list **head)
{
		sep_list *temp;
			sep_list *curr;

				if (head != NULL)
						{
									curr = *head;
											while ((temp = curr) != NULL)
														{
																		curr = curr->next;
																					free(temp);
																							}
													*head = NULL;
														}
}

/**
 * Add_line_node_end - Added Command to A line at the end
 * of a LIST
 * @head: Leader of the List.
 * @line: Command line.
 * Return: Address of the Leader
 */
line_list *add_line_node_end(line_list **head, char *line)
{
		line_list *new, *temp;

			new = malloc(sizeof(line_list));
				if (new == NULL)
							return (NULL);

					new->line = line;
						new->next = NULL;
							temp = *head;

								if (temp == NULL)
										{
													*head = new;
														}
									else
											{
														while (temp->next != NULL)
																		temp = temp->next;
																temp->next = new;
																	}

										return (*head);
}

/**
 * Free_line_list - freed A line_List
 * @head: Leader of THE linked List.
 * Return: NO return.
 */
void free_line_list(line_list **head)
{
		line_list *temp;
			line_list *curr;

				if (head != NULL)
						{
									curr = *head;
											while ((temp = curr) != NULL)
														{
																		curr = curr->next;
																					free(temp);
																							}
													*head = NULL;
														}
}




