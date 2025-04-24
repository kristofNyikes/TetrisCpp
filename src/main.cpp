#include "raylib.h"
#include "game.h"

double lastUpdateTime = 0;

bool EventTrigger(double interval) {
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= interval) {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main() {
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "Tetris");
    SetTargetFPS(60);

    Game game;

    while (!WindowShouldClose()) {
        game.HandleInput();
        if (EventTrigger(0.2)) {
            game.MoveBlockDown();
        }
        BeginDrawing();
        ClearBackground(darkBlue);

        game.Draw();

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
