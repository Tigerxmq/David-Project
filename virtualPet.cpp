#include "raylib.h"

int main()
{
    int screenWidth = 800;
    int screenHeight = 450;

    InitWindow(screenWidth, screenHeight," virtual Pet Project " );

    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLUE);// color:Red（红色值）、Green（绿色值）、Blue（蓝色值）、Alpha（透明度）

        DrawCircle(400, 200, 100, YELLOW); //head

        DrawEllipse(370, 180, 10, 20, BLACK);      //left eye
        DrawEllipse(430, 180, 10, 20, BLACK);      //right eye

        DrawEllipse(410, 250 , 20, 40,  BLACK);      //month

        //DrawSplineLinear((Vector2){, }, 2, 1)
        DrawSplineSegmentBasis((Vector2){620, 150}, (Vector2){425, 145}, (Vector2){425, 145}, (Vector2){300, 250},2, RED); // Draw spline segment: B-Spline, 4 points

        //DrawLineBezierCubic(Vector2 startPos, Vector2 endPos, Vector2 startControlPos, Vector2 endControlPos, float thick, Color); 

        EndDrawing();
    }
    WindowShouldClose();
}