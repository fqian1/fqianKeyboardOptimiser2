#include "iostream"
#include "finger.hpp"
#include <cmath>

Finger::Finger(int fingerId, double dexterity, double homeX, double homeY)
        : fingerId(fingerId), dexterity(dexterity), homeX(homeX), homeY(homeY), posX(homeX), posY(homeY) {};

inline double Finger::distanceTo(const double& x, const double& y)
{
    return sqrt((posX - x)*(posX - x) + (posY - y)*(posY - y));
}

inline void Finger::moveToPos(const double& x, const double& y)
{
    posX = x;
    posY = y;
}

inline void Finger::returnToHome()
{
    posX = homeX;
    posY = homeY;
}

inline void Finger::print() const
{
    std::cout << "Id: " << fingerId << "\nDexterity: " << dexterity << "\nHome Pos: " << homeX 
              << ", " << homeY << "\nCurrent Pos: " << posX << ", " << posY << "\n";
}
