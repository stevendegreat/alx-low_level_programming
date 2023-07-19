#include "main.h"

int _putchar(char c) {
    return write(1, &c, 1); // Write the character to the standard output (file descriptor 1)
}

void print_alphabet(void) {
    /* Your implementation of print_alphabet */
    /* ... */
}

// Implement other functions following the same pattern
// ...

int main(void) {
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');
    return (0);
}
