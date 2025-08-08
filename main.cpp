#include "main.h"
#include "menu.h"

int main()
{
    int screenWidth = 800;
    int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Virtual Pet Project" );
    int action = 0;

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        //Handle input
        menu();

        if (IsKeyPressed(KEY_P)) action = 1;  //Play
        if (IsKeyPressed(KEY_F)) action = 2;  //Feed
        if (IsKeyPressed(KEY_C)) action = 3;  //Clean
        
        BeginDrawing();
        ClearBackground(BLACK);

        //--- Draw Base Pet ---
        DrawCircle(400, 200, 100, YELLOW);  //head
        DrawEllipse(370, 180, 10, 20, BLACK); //left eye
        DrawEllipse(430, 180, 10, 20, BLACK);  //right eye

        DrawEllipse(410, 250 , 20, 40,  BLACK);      //month
        DrawSplineSegmentBasis((Vector2){620, 150}, (Vector2){425, 145}, (Vector2){425, 145}, (Vector2){300, 250}, 2, BLACK);

        




        //Mouth Expression Based on Action
        if(action == 1) {
            //Happy smile
            DrawEllipseLines(400, 280, 30, 10, BLACK); 
        } else if(action == 2) {
            //Open mouth for eating
            //DrawCircle;
            // Flat mouth (neutral)
            //DrawCircle
        }
        EndDrawing();
         
    }
    
}
