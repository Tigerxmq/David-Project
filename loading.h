#pragma once

#include "main.h"

void loading()
{
    EndDrawing();
    BeginDrawing();
    ClearBackground(BLACK);
    DrawText("Loading", 200, 350, 50, WHITE);
    _sleep(1e3); //1e3ms = 1s
}