#pragma once

class Key
{
public: 
    const int keyId;
    const double posX;
    const double posY;
    const wchar_t regChar;
    const wchar_t shiftChar;

    Key(int keyId, double posX, double posY, wchar_t regChar, wchar_t shiftChar);

    void print() const;
    bool isRegular(wchar_t c) const;
};