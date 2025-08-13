#include "raylib.h"

int main()
{
    int screenWidth = 800;
    int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Raylib Project" );

    while(!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(DARKBLUE);
        DrawText ("Welcome to my first Raylib Project! ", 100, 220, 300,LIGHTGRAY);

        EndDrawing();
    }
    WindowShouldClose();
}