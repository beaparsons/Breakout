#pragma once

#include "PowerupBase.h"
//class PowerupBase {};
class PowerupBigPaddle : public PowerupBase
{
public:
    PowerupBigPaddle(sf::RenderWindow* window, Paddle* paddle, Ball* ball);
    ~PowerupBigPaddle();

    std::pair<POWERUPS, float> applyEffect(); //override; // Method to apply the power-up effect
};
