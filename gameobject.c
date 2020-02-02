#include "gameobject.h"

GameObject* init_gameobject(int new_key){

    GameObject* p_new_game_object = malloc(sizeof(GameObject*));
    p_new_game_object -> key = new_key;
    p_new_game_object -> mesh = NULL;
    p_new_game_object -> pos.x = 0;
    p_new_game_object -> pos.y = 0;
    p_new_game_object -> pos.z = 0;

    return p_new_game_object;
}
