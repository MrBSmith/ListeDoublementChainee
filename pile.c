#include "pile.h"

// Pile initialization function
Pile* pile_init(){
    Pile* p_new_pile = malloc(sizeof(Pile));

    // Error when loading the pile exit program
    if(p_new_pile == NULL){
        exit(EXIT_FAILURE);
    }

    // Setup the new pile to be empty
    p_new_pile -> top = NULL;

    return p_new_pile;
}


// Function to stack a new element on top of a pile
void stack(Pile* pile, GameObject* p_new_object){
    // Allocation on the size of an element in the pile
    Element *new_elem = malloc(sizeof(*new_elem));

    // Error when loading either the pile or the new element
    // Exit program
    if (pile == NULL || new_elem == NULL){
        exit(EXIT_FAILURE);
    }

    // Add an element to the top of the pile
    new_elem -> object = p_new_object;
    new_elem -> next_elem = pile -> top;
    pile -> top = new_elem;
}


// Function to remove the top element of the pile and return its value
GameObject* unstack(Pile* p_pile){
    // Error when loading the pile exit program
    if (p_pile == NULL){
        exit(EXIT_FAILURE);
    }

    GameObject* p_unstack_object = NULL;
    Element* unstack_elem = p_pile -> top;

    // Get the value of the element to unstack, if the pile is not empty
    if(p_pile -> top != NULL){
        p_unstack_object = unstack_elem -> object;
        p_pile -> top = unstack_elem -> next_elem;
        free(unstack_elem);
    }
    return p_unstack_object;
}

/*
// Function to print the entire pile, from top to bottom
void print_pile(Pile* pile){
    // Error when loading the pile exit program
    if (pile == NULL){
        exit(EXIT_FAILURE);
    }

    Element *p_elem_to_print = pile -> top;

    while(p_elem_to_print != NULL){
        printf("%d\n", p_elem_to_print -> object);
        p_elem_to_print = p_elem_to_print -> next_elem;
    }
    printf("\n");
}
*/
