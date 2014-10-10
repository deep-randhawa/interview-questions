
#include<stdlib.h>

struct linked_list {
	struct node* head;
};

struct node {
	void* value;
	struct node* fpointer;
	struct node* ppointer;
};

struct linked_list* new_list() {

	// Allocate the list
	struct linked_list* list = malloc(sizeof(struct linked_list));

	return list;
}

void append(struct linked_list* list, void* value) {

	// Create a new node
	struct node* newnode = malloc(sizeof(struct node));
	newnode->value = value;

	// Assign it to head if head does not exist
	if (list->head == NULL) {
		list->head = newnode;
		return;
	}

	struct node* last = list->head->ppointer;
	list->head->ppointer = newnode;
	newnode->fpointer = list->head;
	newnode->ppointer = last;

}

void* get(struct linked_list* list, int position) {

	// Scan over until we reach that node
	struct node* ptr = list->head;
	do {
		ptr = ptr->fpointer;
	} while (--position > 0);

	return ptr->value;

}

void delete(struct linked_list* list, int position) {

	struct node* ptr = list->head;
	do {
		ptr = ptr->fpointer;
	} while (--position > 0);

	ptr->fpointer->ppointer = ptr->ppointer;
	ptr->ppointer->fpointer = ptr->fpointer;

}
