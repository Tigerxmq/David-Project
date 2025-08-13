#include "raylib.h"

using namespace std;

int main()
{
    int screenWidth = 800;
    int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "snake");

    // Background
    Texture2D Background = LoadTexture("images/Background.png");
     
    // Snake head
    Texture2D SnakeHeadImage = LoadTexture("images/Snake Head.png");
    float SnakeHeadX = 500;
    float SnakeHeadY = 100;
    Vector2 SnakeHead = {SnakeHeadX, SnakeHeadY};
    float speed = 2.0f;
    
    //SnakeHead Direction
    Texture2D SnakeHeadDown = LoadTexture("images/Snake Head.png");
    Texture2D SnakeHeadUp = LoadTexture("images/up.png");
    Texture2D SnakeHeadLeft = LoadTexture("images/left.png");
    Texture2D SnakeHeadRight = LoadTexture("images/right.png");
    typedef enum
    {
        up,
        down,
        left,
        right
    }Direction;
    Direction SnakeHeadDir = down;
     
    //0 = stopped, 1 = down, 2 = up, 3 = left, 4 = right
    int currentDirection = 0;

    SetTargetFPS(60);

    //game Loop
    while(!WindowShouldClose())
    {

        
        if(IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S))currentDirection = 1;      
        if(IsKeyDown(KEY_UP) || IsKeyDown(KEY_W))currentDirection = 2;
        if(IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A))currentDirection = 3;
        if(IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D))currentDirection = 4;

        //-------------------------------------------------------------------
        if(currentDirection == 1) SnakeHeadY +=speed;
        if(currentDirection == 2) SnakeHeadY -=speed;
        if(currentDirection == 3) SnakeHeadX -=speed;
        if(currentDirection == 4) SnakeHeadX +=speed;
        //-------------------------------------------------------------------
        //Boundaries for the snake movment
        if((SnakeHeadX + 64) >=screenWidth)// right
        {
            SnakeHeadX =(screenWidth - 64);
        }

        if(SnakeHeadX <= 0)//left
        {
            SnakeHeadX = 0;
        }

        if(SnakeHeadY <= 0)//up
        {
            SnakeHeadY=0;
        }

        if((SnakeHeadY + 64) >=screenHeight)//down
        {
            SnakeHeadY = (screenHeight - 64);
        }



        BeginDrawing();
        DrawTexture(Background, 0, 0,WHITE);
        switch(SnakeHeadDir)
        {
            case right:
            DrawTexture(SnakeHeadRight, SnakeHeadX, SnakeHeadY, WHITE);
            break;
            case left:
            DrawTexture(SnakeHeadLeft, SnakeHeadX, SnakeHeadY, WHITE);
            break;
            case up:
            DrawTexture(SnakeHeadUp, SnakeHeadX, SnakeHeadY, WHITE);
            break;
            case down:
            DrawTexture(SnakeHeadDown, SnakeHeadX, SnakeHeadY, WHITE);
            break;
            default:
            break;
        }
        
        //Draw  SnakeHead

          
        //DrawText("Welcome to my snake game. ", 100, 220, 30, WHITE);


        EndDrawing();

         //-------------------------------------------------------------------
    }

    WindowShouldClose();

  
    
}
