// Isabella Addas, 12/29/25

#include "CaesarCipher.h"
#include <iostream>
#include <string>

using namespace std;

// Default constructor for Caesar Cipher class, automatically
// sets shift to 3 and direction to left
CaesarCipher::CaesarCipher() {
    shift = 3;
    direction = "left";
}

// Alternate constructor for Caesar Cipher class, taking the user's
// chosen shift number, automatically sets direction to left
CaesarCipher::CaesarCipher(int newShift) {
    shift = newShift;
    direction = "left";
}

// Alternate constructor for Caesar Cipher class, taking the user's
// chosen shift number and direction
CaesarCipher::CaesarCipher(int newShift, string &newDirection) {
    shift = newShift;
    direction = newDirection;
}

const string CaesarCipher::encode(string message) {
    return "";
}

const string CaesarCipher::decode(string message) {
    return "";
}

// For a given char input, translates the value into
// a different char value (all alphabetical) based on
// the shift
const char CaesarCipher::translate(char let) {
    char transChar('\0');

    // Two cases of calculations: left or right shift
    // Split up with if-else branch
    if (direction == "left") {

        // In left shift, all char values will have the
        // shift number subtracted from them

        // Split up based on char value range (lowercase
        // and uppercase values accepted!)
        if ((let >= 65) && (let <= 90)) {

            // When the char value - shift is under 65,
            // must add the length of the alphabet
            // to wrap around the letters
            transChar = ((let - shift) < 65) ? (let - shift) + 26 : let - shift;
        } else if ((let >= 97) && (let <= 122)) {

            // The same logic applies to lowercase range
            transChar = ((let - shift) < 97) ? (let - shift) + 26 : let - shift;
        }
    } else {

    }
}

CaesarCipher::~CaesarCipher() {
}