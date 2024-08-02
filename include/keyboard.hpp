#pragma once

#include <unordered_map>
#include "key.hpp"
#include "finger.hpp"

class Keyboard
{
public:
    std::wstring_view charLayout;
    std::vector<Key> keys;
    std::vector<Finger> fingers;
    std::unordered_map<
}

