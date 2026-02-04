#include "ShoeShop.h"
#include <stdlib.h>
#include <stdbool.h>

//add item to specific row and num
static void add_items_impl(Shop* s, int row, int num) {
    ShoeShop* self = (ShoeShop*)s;
    self->shelf[row] += num;
}

//Check if there is something in specific row spot
static int in_stock_impl(Shop* s, int row) {
    ShoeShop* self = (ShoeShop*)s;
    return self->shelf[row] > 0;
}

//Count how many items in shelf
static int count_items_impl(Shop* s, int size) {
    ShoeShop* self = (ShoeShop*)s;
    	int tot = 0;
	for (int k = 0; k < size; k++) {
		tot += self->shelf[k];
	}
	return tot;
}

//Empty the shelves by setting to zero
static int clear_impl(Shop* s, int row) {
    ShoeShop* self = (ShoeShop*)s;
    bool rem = self->shelf[row] > 0;
	self->shelf[row] = 0;
	return rem;
}

//Initialize shoeshop
void ShoeShop_init(ShoeShop* shop, int size) {
    shop->size = size;
    shop->shelf = calloc(size, sizeof(int));

    shop->base.add_items   = add_items_impl;
    shop->base.in_stock    = in_stock_impl;
    shop->base.count_items = count_items_impl;
    shop->base.clear       = clear_impl;
}

//Completely inialite the whole damn shoeshop(Sonja accent)
void ShoeShop_destroy(ShoeShop* shop) {
    free(shop->shelf);
}
