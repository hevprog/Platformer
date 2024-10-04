#include "Character.hpp"

Player::Player()
{
    image = LoadTexture("Graphics/Character/png/Attack (1).png");
    position.x = 0;
    position.y = GetScreenHeight() - image.height;
}

Player::~Player() {
    UnloadTexture(image);
}

void Player::Draw()
{
    DrawTextureV(image, position, WHITE);
}
