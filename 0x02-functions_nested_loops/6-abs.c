#include "main.h"

int _abs(int n) {
    if (n < 0) {
        return -n; // Return the negation of n (absolute value)
    } else {
        return n;  // n is already positive or zero
    }
}
