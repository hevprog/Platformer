#pragma once
#include <raylib.h>

class Player {
    private:
        Texture2D image;
        Vector2 position;
    public:
        Player();
        ~Player();
        void Draw();
        void MoveLeft();
        void MoveRight();
};