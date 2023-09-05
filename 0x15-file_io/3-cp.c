include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
* create_buffer - Allocates a buffer of a specified size.
* @size: The size of the buffer to allocate.
*
* Return: A pointer to the newly-allocated buffer, or NULL on failure.
*/
char *create_buffer(size_t size)
{
char *buffer = malloc(size);

if (buffer == NULL)
perror("Error: Can't allocate buffer");

return buffer;
}

/**
* close_file - Closes a file descriptor.
* @fd: The file descriptor to be closed.
*
* Return: 0 on success, -1 on failure.
*/
int close_file(int fd)
{
int result = close(fd);

if (result == -1)
perror("Error: Can't close file descriptor");

return result;
}

/**
* copy_file - Copies the contents of one file to another.
* @from: The file descriptor of the source file.
* @to: The file descriptor of the destination file.
*
* Return: 0 on success, -1 on failure.
*/
int copy_file(int from, int to)
{
char *buffer;
ssize_t r, w;

buffer = create_buffer(BUFFER_SIZE);

while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
{
w = write(to, buffer, r);
if (w == -1)
{
perror("Error: Can't write to destination file");
free(buffer);
return (-1);
}
}

free(buffer);

return (0);
}

/**
* main - Copies the contents of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure.
*
* Description: If the argument count is incorrect - exit code 97.
* If file_from does not exist or cannot be read - exit code 98.
* If file_to cannot be created or written to - exit code 99.
* If file_to or file_from cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
int from, to;
int result;

if (argc != 3)
{
fprintf(stderr, "Usage: cp file_from file_to\n");
exit(EXIT_FAILURE);
}

from = open(argv[1], O_RDONLY);
if (from == -1)
perror("Error: Can't open source file");

to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (to == -1)
perror("Error: Can't open destination file");

result = copy_file(from, to); /* Use function to copy files */

close_file(from);
close_file(to);

return result == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}
