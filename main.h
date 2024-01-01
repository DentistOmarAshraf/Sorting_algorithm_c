#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print_list(const int *, size_t);
void bubble_sort(int *, size_t);
void select_sort(int *, size_t);
void insertion_sort(int *, size_t);

void swap(int *, int*);
void quick_sort(int *, int);
void quick_rec(int*, int, int, int);
int partition(int *, int, int, int);


#endif
