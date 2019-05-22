#include <stdio.h>
#include "Enemy.h"
#include <string>

void Enemy::load(int x, int y, int width, int height, std::string textureID)
{
    Enemy::load(x, y, width, height, textureID);
}

void Enemy::draw(SDL_Renderer* renderer)
{
    Enemy::draw(renderer);
}

void Enemy::update()
{
    /*go_y += 1;
    go_x += 1;
    go_currentFrame = int(((SDL_GetTicks() / 100) % 4 ));*/
}
