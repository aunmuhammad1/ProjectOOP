#ifndef MATH_CHALLENGE_H
#define MATH_CHALLENGE_H

#include <iostream>
#include "Game.h"

class MathChallenge : public Game {
public:
    MathChallenge();
    void play() override;
};

#endif // MATH_CHALLENGE_H
