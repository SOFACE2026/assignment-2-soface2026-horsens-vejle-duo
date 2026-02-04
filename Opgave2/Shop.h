#ifndef SHOP_H
#define SHOP_H

//Struct shop with all functions that subclasses can inheret
typedef struct Shop {
    void (*add_items)(struct Shop* self, int row, int num);
    int  (*in_stock)(struct Shop* self, int row);
    int  (*count_items)(struct Shop* self, int size);
    int  (*clear)(struct Shop* self, int row);
} Shop;

#endif
