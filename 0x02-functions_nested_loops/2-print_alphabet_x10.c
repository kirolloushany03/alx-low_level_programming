#include <unistd.h>
#include "main.h"

void print_alphabet_x10(void) {
    char letter = 'a'; 
    
    while (letter <= 'z') { 
        for (int i = 0; i < 10; i++) {
            _putchar(letter);
        }
        _putchar('\n');
        letter++;
    }
}

int main() {
    print_alphabet_x10();
    return 0;
}
