#pragma once
#include "iostream"
#include <cmath>

class Finger
{
public:
    const int fingerId;
    const double dexterity;
    const double homeX;
    const double homeY;
    double posX;
    double posY;

    Finger(int fingerId, double dexterity, double homeX, double homeY);

    inline double distanceTo(const double& x, const double& y);
    inline void moveToPos(const double& x, const double& y);
    inline void returnToHome();
    inline void print() const;
};