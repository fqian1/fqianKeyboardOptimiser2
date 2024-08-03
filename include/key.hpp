#pragma once

class Key
{
public: 
    const int keyId;
    const double posX;
    const double posY;
    const char regChar;
    const char shiftChar;

    Key(int keyId, double posX, double posY, char regChar, char shiftChar);

    void print() const;
    bool isRegular(char c) const;
};