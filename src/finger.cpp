#include "iostream"
#include <cmath>
#include "include/finger.hpp"

Finger::Finger(int fingerId, double dexterity, double homeX, double homeY)
        : fingerId(fingerId), dexterity(dexterity), homeX(homeX), homeY(homeY), posX(homeX), posY(homeY) {}

static inline double distance(const double& x, const double& y)
{
    return sqrt((posX - x)**2 + (posY - y)**2);
}