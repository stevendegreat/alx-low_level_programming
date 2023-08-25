#include <stdio.h>

/* Define a constructor function with low priority and file scope */
static void first(void) __attribute__ ((constructor(101)));

/**
* first - prints a sentence before the main
* function is executed
* This function is inspired by a quote from "The Hare and the Tortoise"
* by Aesop, which is also used as an epigraph for "The Unbearable
* Lightness of Being" by Milan Kundera.
*/
static void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
