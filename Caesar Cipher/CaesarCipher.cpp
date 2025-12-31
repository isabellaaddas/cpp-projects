// Isabella Addas, 12/29/25

#include "CaesarCipher.h"
#include <iostream>
#include <string>

using namespace std;

// Default constructor for Caesar Cipher class, automatically
// sets shift to 3 and direction to left
CaesarCipher::CaesarCipher() {

}

// Alternate constructor for Caesar Cipher class, taking the user's
// chosen shift number, automatically sets direction to left
CaesarCipher::CaesarCipher(int newShift) {

}

// Alternate constructor for Caesar Cipher class, taking the user's
// chosen shift number and direction
CaesarCipher::CaesarCipher(int newShift, string newDirection) {
    shift = newShift;
    direction = newDirection;
}

void CaesarCipher::encrypt(string message) {

}

const string CaesarCipher::decrypt(string message) {

}

// *** PRIVATE HELPER METHODS ***
void CaesarCipher::initArray() {

}

CaesarCipher::~CaesarCipher() {

}