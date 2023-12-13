#include <iostream>
#include <cstring>
#include <cmath>
int parseHex(const char* const hexString) {
    int result = 0;
    int length = strlen(hexString);
    int base = 1; // The base for the hexadecimal number system

    // Iterate over each character from right to left
    for (int i = length - 1; i >= 0; i--) {
        // Convert the current character to the corresponding decimal value
        if (hexString[i] >= '0' && hexString[i] <= '9') {
            result += (hexString[i] - '0') * base;
        }
        else if (hexString[i] >= 'A' && hexString[i] <= 'F') {
            result += (hexString[i] - 'A' + 10) * base;
        }
        else if (hexString[i] >= 'a' && hexString[i] <= 'f') {
            result += (hexString[i] - 'a' + 10) * base;
        }
        else {
            // If the character is not a valid hexadecimal digit, throw an error
            throw std::invalid_argument("Invalid hexadecimal character found");
        }
        base *= 16; // Increase the base (16^n)
    }

    return result;
}