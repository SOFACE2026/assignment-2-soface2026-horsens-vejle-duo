#ifndef SHOESHOP_H
#define SHOESHOP_H

#include <stdio.h>   /* printf */
#include <stdlib.h>  /* malloc, free */
#include <stdbool.h> /* bool, true, false */

//struct with size and shelf
typedef struct ShoeShop{
    int size;
    int* shelf;
} ShoeShop;

//All the functions with shoeshop(struct) pointers
ShoeShop* st_ShoeShop(int size);

void add_items(ShoeShop* s, int x, int y);

int in_stock(ShoeShop* s, int x);

int count_items(int size);

bool clear(ShoeShop* s, int x);

#endif