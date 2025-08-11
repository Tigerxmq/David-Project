#pragma once

#include "main.h"
#include "loading.h"
#include "maze.h"

int choice = 1;

bool Keep()
{
    if(choice>4)
    {
        choice = 4;
        return false;
    }
    if(choice<1)
    {
        choice = 1;
        return false;
    }
    return true;
}

void DrawPointer()
{
    
    float x1 = 150, y1 = choice * 100 + 50; //left top
    float x2 = 150, y2 = choice * 100 + 100; //left bottom
    float x3 = 200, y3 = choice * 100 + 75; //right
    Vector2 v1 = {x1, y1}, v2 = {x2, y2}, v3 = {x3, y3};
    DrawTriangle(v1, v2, v3, WHITE);
    EndDrawing();
}

void pointer(char commend)
{
    
    
    if(Keep())
    {
        if(commend=='u')
        {
        
        }
        if(commend=='d')
        {

        }
    }
    
    
}

void DrawMenu()
{
    BeginDrawing();
    ClearBackground(BLACK);
    DrawText("Counter Kill", 200, 50, 70, WHITE);
    DrawText("New Game", 200, 150, 50, WHITE);
    DrawText("Load Game", 200, 250, 50, WHITE);
    DrawText("", 200, 350, 50, WHITE);
    DrawText("Exit", 200, 450, 50, WHITE);
}

int send()
{
    switch (choice)
    {
    case 1:
        //loading();
        return 1;
        break;
    case 2:
        return 2;
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    
    default:
        break;
    }
}

void menu()
{
    Keep();
    DrawMenu();
    DrawPointer();
    if(IsKeyPressed(KEY_W)||IsKeyPressed(KEY_UP))
    {
        choice -= 1;        
    }
    else if(IsKeyPressed(KEY_S)||IsKeyPressed(KEY_DOWN))
    {
        choice += 1;
    }
    else if(IsKeyPressed(KEY_ENTER))
    {
        send();
    } 
}

void LoadGame()
{
    
}