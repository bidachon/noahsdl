#ifndef Player_h
#define Player_h
#include "GameObject.h"

class Player : public GameObject
{
public:
    
    void load(int x, int y, int width, int height, std::string textureID);
    void draw(SDL_Renderer* renderer);
    void update();
    //If you don't implement this, Player will be abstract
    //and you won't be able to instantiate it.
    //void clean();
};

#endif /* Player_h */
