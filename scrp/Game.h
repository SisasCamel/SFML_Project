#pragma once
#include <iostream>
#include "Player.cpp"

// Acts as the game engine

class Game
{
private:
    //Variables
    bool endGame;

    // Window 
    sf::ContextSettings settings;
    sf::RenderWindow* window;
    sf::VideoMode videoMode;
    sf::Event e;

    Player player;

    //Mouse Positions
    sf::Vector2i mousePosWindow;

    // Game Objects
    sf::RectangleShape enemy;
    
    //Private Functions
    void initVariables();
    void initWindow();
    void initEnemies();

public:
    // Constructor / Destructor
    Game();
    ~Game();

    //Accessors
    const bool running() const;

    // Functions
    void pollEvents();
    void updateMousePositions();
    void update();
    void render();

};


