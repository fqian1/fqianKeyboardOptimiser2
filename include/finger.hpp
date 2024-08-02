#pragma once

class Finger
{
    int fingerId;
    double score;
    const double dexterity;
    const double homeX;
    const double homeY;
    double posX;
    double posY;

    Finger(int fingerId, double dexterity, double homeX, double homeY);

    static inline double distance(const double& posX, const double& posY);
    double moveToPos(const double& x, const double& y);
    void returnToHome();
    void print() const;
};