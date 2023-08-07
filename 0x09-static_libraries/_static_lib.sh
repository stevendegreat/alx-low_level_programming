#!/bin/bash

# Compile the source files (.c) into object files (.o)
gcc -c file1.c -o file1.o
gcc -c file2.c -o file2.o
# Add more source files as needed, following the same pattern

# Create a static library with the compiled object files
ar rcs libyourlibrary.a file1.o file2.o
# Replace "yourlibrary" with the desired name for your library
# Add more object files as needed, following the same pattern

# Optionally, clean up the temporary object files
rm -f file1.o file2.o
# Remove additional object files if you added more in the previous step

