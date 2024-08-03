#include "keyboard.hpp"

#include <unordered_map>
#include <vector>
#include "key.hpp"
#include "finger.hpp"

Keyboard::Keyboard(std::wstring_view charLayout, int fingerAssignments[5][12], const std::vector<Key>& keys, const std::vector<Finger>& fingers)
                  : charLayout(charLayout), keys(keys), fingers(fingers), score(0)
{
    for(auto& key : keys)
    {
        charToKeyMap[key.regChar] = key.keyId;
        charToKeyMap[key.shiftChar] = key.keyId;
        keyToFingerMap[key.keyId] = 
    }
}
