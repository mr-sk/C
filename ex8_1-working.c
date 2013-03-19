#include <stdio.h>
#include <stdlib.h>

struct listItem {
    struct listItem *next;
	int data;
};


void listInsert(struct listItem** start, struct listItem* itemToInsert) {
    // listInsert(struct listItem* start, struct listItem* itemToInsert) {
	printf("&start address in function: %p\n", &start);
	printf("start address in function: %p\n", start);
	printf("*start address in function: %p\n", *start);	
	//printf("**start address in function: %p\n\n", **start);	

	printf("&itemToInsert address in function: %p\n", &itemToInsert);	
	printf("itemToInsert address in function: %p\n", itemToInsert);	
	printf("*itemToInsert address in function: %p\n", *itemToInsert);	

    (*itemToInsert).next = *start; 
    //(*itemToInsert).next = start; 
	//   dereference ptr to access listItem 
	//   struct and access .next element, set to start ptr.

	*start = itemToInsert; 
	//start = itemToInsert;
	// dereference start ptr to access listItem 
    // struct and set that to the itemToInsert ptr.
	
	//(*itemToInsert).data = 9999;
}

int main()
{
	struct listItem* start = NULL; 
	struct listItem* newItem = calloc(1U, sizeof(*newItem));
	struct listItem* item1   = calloc(1U, sizeof(*item1));

	(*newItem).data = 11; // dereference ptr, to get to listItem struct and access .data element.
	(*item1).data   = 22;
	start = newItem;

	printf("&start address in main: %p\n", &start);
	printf("start address in main: %p\n", start);
	printf("*start address in main: %p\n\n\n", *start);	

	listInsert(&start, item1); 
    //listInsert(start, item1);

	printf("item1->data: %d\n", item1->data);

	struct listItem* current = start;
	size_t numberOfElements = 0;

	while (current) {
		printf("%d\n", (*current).data);
		current = (*current).next;
		++numberOfElements;
	}

	printf("numberOfElements: %lu\n", numberOfElements);
}
