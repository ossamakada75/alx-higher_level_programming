#ifndef RENAMED_LISTS_H
#define RENAMED_LISTS_H
#include <stdlib.h>

/**
 * struct renamed_node_s - singly linked list
 * @value: integer
 * @next_node: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct renamed_node_s
{
    int value;
    struct renamed_node_s *next_node;
} renamed_node_t;

size_t print_renamed_list(const renamed_node_t *h);
renamed_node_t *add_renamed_node(renamed_node_t **head, const int value);
void free_renamed_list(renamed_node_t *head);
int check_renamed_cycle(renamed_node_t *list);

#endif /* RENAMED_LISTS_H */

