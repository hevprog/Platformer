#include <raylib.h>

int main() {
    const int ScreenWidth = 1000;
    const int ScreenHeight = 780;

    InitWindow(ScreenWidth, ScreenHeight, "Platformers");
    Texture2D background = LoadTexture("Graphics/BG/BG.png");
    if (background.id == 0) {
    
    TraceLog(LOG_ERROR, "Failed to load background texture!");
    return 1;
    }

    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawTexture(background, 0, 0, WHITE);

        EndDrawing();
    }
    UnloadTexture(background);
    CloseWindow();
}