#include <stdio.h>
#include "Game.h"
#include "TextureManager.h"

Game::Game()
{}
Game::~Game()
{}

int currentFrame;

Game* Game::instance = 0;

bool Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
    int flags = 0;
    if(fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }
    
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags);
        renderer = SDL_CreateRenderer(window, -1, 0);

        
        if(renderer != 0 )
        {
            SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        }
        
        isRunning = true;
    }
    
    TextureManager::Instance()->load("/Users/noah/Desktop/Big Trouble in Little Birthday/assets/Robin_Hero_forward_Idle.png", "animate", renderer);
    
    m_gameObjects.push_back(go);
    m_gameObjects.push_back(player);
    m_gameObjects.push_back(enemy);
    
    return true;
}

void Game::render()
{
    SDL_RenderClear(renderer);
    
    for(std::vector<GameObject*>::size_type i = 0; i != m_gameObjects.size(); i++)
    {
        m_gameObjects[i]->draw();
    }
    
    SDL_RenderPresent(renderer);
}

void Game::update()
{
    for(std::vector<GameObject*>::size_type i = 0; i != m_gameObjects.size(); i++)
    {
        m_gameObjects[i]->update();
    }
}

void Game::handleEvents()
{
    SDL_Event event;
    if(SDL_PollEvent(&event))
    {
        switch (event.type) {
            case SDL_QUIT:
                isRunning = false;
                break;
                
            default:
                break;
        }
    }
}

void Game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}
