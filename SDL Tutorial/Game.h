#ifndef Game_h
#define Game_h
#include "SDL2/SDL.h"
#include "SDL2_image/SDL_image.h"
#include "GameObject.h"
#include "Player.h"
#include "Enemy.h"
#include <vector>

class Game
{
public:
    
    ~Game();
    
    bool init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen );
    
    void handleEvents();
    void render();
    void update();
    
    void clean();
    
    bool running() { return isRunning; }
    
    GameObject* go;
    Player* player;
    GameObject* enemy;
    
    std::vector<GameObject*> m_gameObjects;
    
    SDL_Renderer* getRenderer() const { return renderer; }
    
    static Game* Instance()
    {
        if(instance == 0)
        {
            instance = new Game();
            return instance;
        }
        return instance;
    }
    
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    
    Game();
    static Game* instance;
    
    bool isRunning;
};



#endif /* Game_h */
