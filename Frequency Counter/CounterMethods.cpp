// Isabella Addas, 1/2/26

#include "CounterMethods.h"
#include <iostream>
#include <string>

using namespace std;

/* Function definitions */

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

// Counts the full words from input string and returns the
// total (not including spaces)
const int countWords(string input) {

    // Initialize count variable with 0
    int count(0);

    // Iterate over entire length of input string
    for (int i = 0; i < input.length(); i++) {

        // *Only* update the count when a space is encountered
        // (indicates a break, which indicates a full word),
        // or when end of string reached (last full word)
        if (input[i] == ' ') {
            count++;
        } else if (i == input.length() - 1) {
            count++;
        }
    }

    return count;
}

// Counts the amount of times a certain character appears in
// input string (including whitespace character)
const int countChar(string input, char target) {

    // Initialize count variable with 0
    int count(0);

    // Iterate over entire length of input string
    for (int i = 0; i < input.length(); i++) {

        // Only update the count when target char encountered
        // (convert char to lower to ignore case sensitivity)
        if (tolower(input[i]) == tolower(target)) {
            count++;
        }
    }

    return count;
}

// Counts the amount of times a certain word appears in input
// string (not including spaces)
const int countWord(string input, string target) {

    // Initialize count variable with 0
    int count(0);

    // Initialize starting index variable with 0
    int index(0);

    // Using the find method built into the string library,
    // run while loop to find target substring (find will return
    // the index where first encountered) until nothing returned (npos)
    while (input.find(target, index) != string::npos) {

        // Update count (method returned an index, so substring was
        // found)
        count++;

        // Update index to continue searching *after* newfound
        // occurrence (result of find method + substring length)
        index += input.find(target, index) + target.length();
    }

    return count;
}