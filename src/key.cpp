#include "iostream"
#include "key.hpp"

Key::Key(int keyId, double posX, double posY, wchar_t regChar, wchar_t shiftChar, int fingerId)
        : keyId(keyId), posX(posX), posY(posY), regChar(regChar), shiftChar(shiftChar), fingerId(fingerId) {};

void Key::print() const 
{
    std::wcout << L"Key(ID: " << keyId << L", Position: (" << posX << L", " << posY
                << L"), Regular: '" << regChar << L"', Shift: '" << shiftChar << L"', Finger: "
                << fingerId << L")" << std::endl;
}

bool Key::isRegular(wchar_t c) const
{
    return c == regChar ? true : false;
}