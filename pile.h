#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "gameobject.h"
#include "element.h"

typedef struct Pile{
    Element* top;
} Pile;

//// PROTOTYPES ////
Pile* pile_init();
void stack(Pile* pile, GameObject* p_new_object);
GameObject* unstack(Pile* pile);
void print_pile(Pile* pile);

#endif // PILE_H_INCLUDED
