#include <cstdlib>
#include "../include/raylib.h"
#include "../include/entity.hpp"

Entity::Entity(){

}

Entity::Entity(float x, float y, int height, int width) : one{x, y}, four{x + width -1, y + height - 1}, collision{x, y, width, height} {

}

void Entity::render() {
    DrawRectangleRec(collision, WHITE);
}