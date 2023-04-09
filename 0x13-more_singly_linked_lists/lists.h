#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdlib.h>
/**
 * struct listsint_s - singly list
 * @n: integer
 * @next: points to the next node
 *
 * Description: Siblgy List node structure
 */

typedef struct listint_s{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
