#include "main.h"
#include <unistd.h> // Include the necessary library for the write syscall

int _putchar(char c) {
    return write(1, &c, 1); // Write the character to the standard output (file descriptor 1)
}

// Implement other functions following the same pattern
// ...

