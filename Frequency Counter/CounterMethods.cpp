// Isabella Addas, 1/2/26

#include "CounterMethods.h"
#include <iostream>
#include <string>

using namespace std;

/*** Function definitions ***/

// Counts characters from input string and returns the total
// (not including spaces)
const int countChars(string input) {

    // Initialize count variable to 0
    int count(0);

    // Iterate over the entire length of the input string
    for (int i = 0; i < input.length(); i++) {

        // If a space is encountered, exclude from character
        // count
        if (input[i] == ' ') {
            continue;
        }

        // Otherwise, add character to count
        count++;
    }

    return count;
}