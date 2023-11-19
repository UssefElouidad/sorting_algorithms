#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>
#include <time.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap(listint_t *l1, listint_t *l2);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap22(int *array, size_t size, int *a, int *b);
size_t lomuto_patrtition(int *array, size_t size, ssize_t l, ssize_t h);
void quicksort(int *array, size_t size, ssize_t l, ssize_t h);
void shell_sort(int *array, size_t size);
size_t get_max_gap(size_t size);
void swap_node(listint_t **list, listint_t *node1, listint_t *node2);
void cocktail_sort_list(listint_t **list);
#endif
