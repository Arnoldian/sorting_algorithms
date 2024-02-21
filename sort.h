#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* direction macros for bitwise sort*/
#define UP 0
#define DOWN 1

/* enum bool - binary values enum */
typedef enum bool
{
    false = 0,
    true
} bool;


/**
 * struct listint_s - Doubly linked list node
 * @n: Int stored in node
 * @prev: ptr 2 previous element of list
 * @next: ptr 2 next element of list
 */

typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* swapping help */
void swap_ints(int *a, int *b);

/* helping functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* functions prototypes*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
