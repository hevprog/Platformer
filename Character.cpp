#include "header.hpp"

Player::Player()
{
    image = LoadTexture("Graphics/Character/png/Attack (1).png");
    position.x = (GetScreenWidth() - image.width)/2;
    position.y = GetScreenHeight() - image.height - 100;
}

Player::~Player() {
    UnloadTexture(image);
}

void Player::Draw()
{
    DrawTextureV(image, position, WHITE);
}
