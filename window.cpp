#include "raylib.h"
#include "face.h"

int main()
{
    ///
    int w=800,h=450;
    int choice;

    InitWindow(w,h,"Girl");

    while (!WindowShouldClose())//initialization
    {
        BeginDrawing();

        ClearBackground(Color{137,181,34,193});//color

        DrawCircle(400,250,100,ORANGE); //head

        DrawCircle(400,250,10,RED); //nose
        
        DrawCircle(370,210,10,BLACK); //left eye
        DrawCircle(430,210,10,BLACK); //right eye

        DrawTriangle((Vector2){400, 160}, (Vector2){350, 130}, (Vector2){350, 190}, PINK); //left ear
        DrawTriangle((Vector2){400, 160}, (Vector2){450, 190}, (Vector2){450, 130}, PINK); //right ear

        if(IsKeyPressed(KEY_LEFT)) choice=1;
        else if(IsKeyPressed(KEY_RIGHT)) choice=2;
        else if(IsKeyPressed(KEY_UP)) choice=3;
        else if(IsKeyPressed(KEY_DOWN)) choice=4;
        
        mouth(0);

        switch (choice)
        {
        case 1: //smile
            
        case 2: //
            DrawText("Smile!", 550, 100, 50, PINK);            
            break;
        case 3: //jump
            
            break;
        case 4: //
            DrawText("Smile!", 550, 100, 50, PINK);     
            mouth(1);       
            break;
        default:
            break;
        }

        EndDrawing();
    } 
    CloseWindow();
}