#include "raylib.h"

int main() {
    InitWindow(800, 600, "project");
    SetTargetFPS(60);

    Vector2 pos = { 400, 300 };
    const float radius = 30.0f;

    while (!WindowShouldClose()) {
        float speed = 5.0f;


        if (IsKeyDown(KEY_SPACE)) {
            speed = 10.0f;
        }

        if (IsKeyDown(KEY_RIGHT)) pos.x += speed;
        if (IsKeyDown(KEY_LEFT))  pos.x -= speed;
        if (IsKeyDown(KEY_UP))    pos.y -= speed;
        if (IsKeyDown(KEY_DOWN))  pos.y += speed;

        BeginDrawing();
        ClearBackground((Color) { 50, 50, 150, 255 });

        DrawText("move with direction keys, accerlation with space bar.", 10, 10, 20, (Color) { 255, 255, 255, 255 });

        DrawCircleV(pos, radius, (Color) { 255, 0, 0, 255 });

        EndDrawing();
    }

    CloseWindow();
    return 0;
}