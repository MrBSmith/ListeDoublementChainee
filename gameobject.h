#ifndef GAMEOBJECT_H_INCLUDED
#define GAMEOBJECT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct Vector3{
    int x;
    int y;
    int z;
} Vector3;


typedef struct GameObject{
    int key;
    char* mesh;
    Vector3 pos;
} GameObject;

//// PROTOTYPES ////

GameObject* init_gameobject(int new_key);

#endif // GAMEOBJECT_H_INCLUDED
