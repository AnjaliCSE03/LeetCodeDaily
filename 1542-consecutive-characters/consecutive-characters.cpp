#include <string> // Required for std::string
// No #include <algorithm> needed for std::max

class Solution {
public:
    int maxPower(std::string s) {
        // According to constraints, s.length >= 1, so s won't be empty.
        // If s was allowed to be empty, you might return 0 here.

        // Initialize max_power to 1 because a single character string has a power of 1.
        int max_power = 1;
        // Initialize current_power to 1 for the first character.
        int current_power = 1;

        // Iterate from the second character (index 1)
        for (int i = 1; i < s.length(); ++i) {
            // Check if the current character is the same as the previous one
            if (s[i] == s[i - 1]) {
                // If they are the same, extend the current consecutive count
                current_power++;
            } else {
                // If they are different, the current sequence of identical characters has ended.

                // Before resetting current_power, check if this sequence was the longest found so far.
                if (current_power > max_power) {
                    max_power = current_power;
                }
                // Reset current_power to 1 for the new character sequence that just started.
                current_power = 1;
            }
        }

        // After the loop finishes, there's one final check needed.
        // This handles the case where the longest sequence of characters
        // is at the very end of the string (e.g., "aaabbb" - 'bbb' wouldn't be captured without this).
        if (current_power > max_power) {
            max_power = current_power;
        }

        return max_power;
    }
};
