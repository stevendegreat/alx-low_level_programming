#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 ⦁ main - multiplies two numbers
 ⦁ @argc: number of arguments
 ⦁ @argv: array of arguments
 ⦁ 
 ⦁ Return: always 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
int result, num1, num2;
char *endptr;

if (argc != 3)
{
printf("Error\n");
return 1;
}

num1 = strtol(argv[1], &endptr, 10);
if (*endptr != '\0')
{
perror("Invalid argument");
return 1;
}

num2 = strtol(argv[2], &endptr, 10);
if (*endptr != '\0')
{
perror("Invalid argument");
return 1;
}

result = num1 * num2;

printf("%d\n", result);
return 0;
}
