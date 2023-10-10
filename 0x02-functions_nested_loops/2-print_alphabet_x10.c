#include <unistd.h>
#include "main.h"

void print_alphabet_x10(void) {
    char letter = 'a';
    int i = 0;
    
    while (letter <= 'z') {
        for (i = 0; i < 10; i++) {
            _putchar(letter);
        }
        _putchar('\n');
        letter++;
    }
}
