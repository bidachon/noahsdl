//
//  Game.hpp
//  SDL Tutorial
//
//  Created by Nicolas Robert on 4/1/19.
//  Copyright © 2019 Nicolas Robert. All rights reserved.
//

#ifndef Game_h

#define Game_h

#include <SDL2/SDL.h>

#include <iostream>



class Game
{
    
public:
    
    
    Game();
    
    ~Game();
    
    
    
    
    
    bool init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
    
    
    
    void render();
    
    
    
    void update();
    
    
    
    void handleEvents();
    
    void clean();
    
    
    
    bool running () { return m_bRunning; }
    
    
    
    
    
private:
    
    
    
    SDL_Window* window;
    
    SDL_Renderer* renderer;
    
    bool m_bRunning;
    
};


#endif /* Game_hpp */
