#include <unistd.h>

void _putchar(char c) {
    write(1, &c, 1);
}

void print_alphabet_x10(void) {
    char letter = 'a'; // Start with 'a'
    
    while (letter <= 'z') { // Loop through the alphabet
        for (int i = 0; i < 10; i++) { // Print each letter 10 times
            _putchar(letter);
        }
        _putchar('\n'); // Add a newline character after each set of 10 letters
        letter++; // Move to the next letter in the alphabet
    }
}

int main() {
    print_alphabet_x10();
    return 0;
}
