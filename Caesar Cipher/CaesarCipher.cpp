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

}

CaesarCipher::~CaesarCipher() {
}