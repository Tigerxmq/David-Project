#include "raylib.h"
#include "menu.h"
using namespace std;

int main()
{
    int w=1980,d=1080;
    InitWindow(w, d, "Victoria III (simple)");
    while(!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);

        EndDrawing();
    }    
    CloseWindow();
}
