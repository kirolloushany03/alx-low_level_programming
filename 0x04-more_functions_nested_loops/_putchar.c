#include <unistd.h>
void _putchar(char c) {
if (write(1, &c, 1) == -1) {}
}
