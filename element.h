#ifndef ELEMENT_H_INCLUDED
#define ELEMENT_H_INCLUDED

#include "gameobject.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Element Element;
struct Element{
    GameObject* object;
    Element* next_elem;
    Element* previous_elem;
};

#endif // ELEMENT_H_INCLUDED
