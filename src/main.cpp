#include <raylib.h>
#include <iostream>
#include "player.h"

int main()
{
    // const int screenWidth = 800;
    // const int screenHeight = 450;

    // InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    // SetTargetFPS(60);

    // while (!WindowShouldClose())
    // {
    //     BeginDrawing();

    //     ClearBackground(RAYWHITE);

    //     DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

    //     EndDrawing();
    // }

    // CloseWindow();
    Player player1(100);

    std::cout << "Player's current health: " << player1.getHealth() << std::endl;

    return 0;
}
