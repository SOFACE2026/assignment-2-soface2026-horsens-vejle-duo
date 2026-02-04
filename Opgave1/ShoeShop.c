#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "Opgave1/ShoeShop.h"

//Initialize shoeshop
ShoeShop* st_ShoeShop(int size){
    ShoeShop* s = malloc(sizeof(ShoeShop));
}

//add item to specific row and num
void add_items(ShoeShop* s, int row, int num) {
	s->shelf[row] += num;
}

//Check if there is something in specific row spot
int in_stock(ShoeShop* s, int row) {
	return s->shelf[row] > 0;
}

//Count how many items in shelf
int count_items(ShoeShop* s, int size) {
	int tot = 0;
	for (int k = 0; k < size; k++) {
		tot += s->shelf[k];
	}
	return tot;
}

//Empty the shelves by setting to zero
bool clear(ShoeShop* s, int row) {
	bool rem = s->shelf[row] > 0;
	s->shelf[row] = 0;
	return rem;
}
