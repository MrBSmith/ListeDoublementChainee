#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include "element.h"

typedef struct List{
    Element* first;
    Element* last;
} List;

//// PROTOTYPES ////
List* list_init()

void append_first_list(List* p_list, GameObject* new_object);
void append_last_list(List* p_list, GameObject* new_object);
void append_at_index_list(List* p_list, GameObject* new_object);

GameObject* free_first_list();
GameObject* free_last_list();
GameObject* free_at_index_list();

#endif // LIST_H_INCLUDED
