#ifndef SHOESHOP_H
#define SHOESHOP_H

#include "Shop.h"

//struct shoeshop with shop struct inside
typedef struct ShoeShop{
    Shop base;
    int size;
    int* shelf;
} ShoeShop;



#endif