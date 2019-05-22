#ifndef Enemy_h
#define Enemy_h
#include "GameObject.h"

class Enemy : public GameObject
{
public:
    
    void load(int x, int y, int width, int height, std::string textureID);
    void draw(SDL_Renderer* renderer);
    void update();
    //void clean();
};


#endif /* Enemy_h */
