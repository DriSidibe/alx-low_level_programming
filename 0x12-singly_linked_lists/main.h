#ifndef __MAIN_H_
#define __MAIN_H_


/**
 * struct list_t - singly linked list
 * @str: ...
 * @len: length
 * @next: ...
 *
 * Description: ...
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

size_t print_list(const list_t *h);

#endif
