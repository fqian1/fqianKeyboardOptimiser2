#include "iostream"
#include <vector>
#include <unordered_map>
#include <regex>
#include "finger.hpp"
#include "keyboard.hpp"
#include "key.hpp"

#define LEFT_SHIFT  0x80
#define RIGHT_SHIFT 0x81
#define CTRL        0x82
#define ALT         0x83
#define ALT_GR      0x84
#define WIN_SUPER   0x85
#define BACKSPACE   '\b'
#define TAB         '\t'
#define ENTER       '\n'
#define ESCAPE      '\x1b'

std::string replaceSpecialKeys(const std::string& input) {
    std::string result = input;

    // Replace escape sequences with custom codes
    result = std::regex_replace(result, std::regex(R"(0x80)"), std::string(1, LEFT_SHIFT));
    result = std::regex_replace(result, std::regex(R"(0x81)"), std::string(1, RIGHT_SHIFT));
    result = std::regex_replace(result, std::regex(R"(\x1b)"), std::string(1, ESCAPE));
    result = std::regex_replace(result, std::regex(R"(\t)"), std::string(1, TAB));
    result = std::regex_replace(result, std::regex(R"(\b)"), std::string(1, BACKSPACE));

    return result;
}

std::vector<Finger> initFingers()
{
    std::vector<Finger> fingers;
    fingers.push_back(Finger(0, , 0.6)); 
    return fingers;
}

std::vector<Key> initKeys()
{
    std::vector<Key> keys;
    std::cout << "Use Defaults? (Y/N): ";

    double horizontalRowOffsets[5] {0, 0, 0, 0, 0};
    double verticalRowOffsets[12] {0};
    int rowKeyAmount[5] {12, 12, 12, 12, 10};
}

int main()
{
    std::string regCharLayout = LR"(`1234567890-\tqwertyuiop=\x1basdfghjkl;#0x80\zxcvbnm,.0x810x83)";
    std::string shiftCharLayout = LR"()";
    int rows = 5;
    int columns = 12;
    std::vector<double> rowOffsets(rows, 0);
    std::vector<double> columnOffsets(columns, 0);
    std::vector<int> rowKeyAmounts;
    rowKeyAmounts.push_back(12);
    rowKeyAmounts.push_back(12);
    rowKeyAmounts.push_back(12);
    rowKeyAmounts.push_back(12);
    rowKeyAmounts.push_back(10);
    std::vector<Key> keys;
    int keyId{0};


    for(int row{0}; row < rows; row++)
    {
        double y {row + 0.5};
        for(int col{0}; col < rowKeyAmounts[row]; col++)
        {
            double x{col + rowOffsets[row] + 0.5};
            keys.push_back(Key(keyId, x, y, ))
        }
    }

    
    int fingerAssignments[5][12] = {
        {0, 0, 1, 2, 3, 3, 6, 6, 7, 8, 9, 9},
        {0, 0, 1, 2, 3, 3, 6, 6, 7, 8, 9, 9},
        {0, 0, 1, 2, 3, 3, 6, 6, 7, 8, 9, 9},
        {0, 0, 1, 2, 3, 3, 6, 6, 7, 8, 9, 9},
           {4, 4, 4, 4, 4, 5, 5, 5, 5, 5}};

    std::cout << "hello world";
    return 0;
}