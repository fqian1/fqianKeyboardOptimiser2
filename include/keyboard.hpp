#pragma once

#include <unordered_map>
#include <vector>
#include "key.hpp"
#include "finger.hpp"

class Keyboard
{
public:
    std::wstring_view charLayout;
    std::vector<Key> keys;
    std::vector<Finger> fingers;
    std::unordered_map<wchar_t, int> charToKeyMap;
    std::unordered_map<int, int> keyToFingerMap;
    double score;
    std::wstring fingerNames[10]
    {
        L"Left_Pinky",
        L"Left_Ring",
        L"Left_Middle",
        L"Left_Index",
        L"Left_Thumb",
        L"Right_Thumb",
        L"Right_Index",
        L"Right_Middle",
        L"Right_Ring",
        L"Right_Pinky"
    };

    Keyboard(std::wstring_view charLayout, int fingerAssignments[5][12], const std::vector<Key>& keys, const std::vector<Finger>& fingers);

    double evaluate(const std::wstring_view text);
}

