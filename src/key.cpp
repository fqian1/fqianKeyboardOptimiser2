#include "iostream"
#include "key.hpp"

Key::Key(int keyId, double posX, double posY, char regChar, char shiftChar)
        : keyId(keyId), posX(posX), posY(posY), regChar(regChar), shiftChar(shiftChar) {};

void Key::print() const 
{
    std::wcout << "Key(ID: " << keyId << ", Position: (" << posX << ", " << posY
                << "), Regular: '" << regChar << "', Shift: '" << shiftChar << std::endl;
}

bool Key::isRegular(char c) const
{
    return c == regChar ? true : false;
}