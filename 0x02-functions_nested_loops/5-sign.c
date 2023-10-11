#include <stdio.h>
#include "main.h"


int print_sign(int n) {
    if (n > 0) {
        putchar('+');
        putchar(n + '0');
        return 1;
    } else if (n == 0) {
        putchar('0');
        return 0;
    } else {
        putchar('-');
        putchar(-n + '0');
        return -1;
    }
}
