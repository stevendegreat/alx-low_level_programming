#include "3-calc.h"

int op_add(int a, int b) __attribute__((const));
int op_sub(int a, int b) __attribute__((const));
int op_mul(int a, int b) __attribute__((const));
int op_div(int a, int b) __attribute__((const));
int op_mod(int a, int b) __attribute__((const));

/**
 *op_add - Returns the sum of two numbers.
 *@a: The first number.
 *@b: The second number.
 *
 *Return: The sum of a and b.
 */
inline int op_add(int const a, int const b) /* Use const and inline */
{
return (a + b);
}
/**
 *op_sub - Returns the difference of two numbers.
 *@a: The first number.
 *@b: The second number.
 *
 *Return: The difference of a and b.
 */
inline int op_sub(int const a, int const b) /* Use const and inline */
{
return (a - b);
}
/**
 *op_mul - Returns the product of two numbers.
 *@a: The first number.
 *@b: The second number.
 *
 *Return: The product of a and b.
 */
inline int op_mul(int const a, int const b) /* Use const and inline */
{
return (a * b);
}
/**
 *op_div - Returns the division of two numbers.
 *@a: The first number.
 *@b: The second number.
 *
 *Return: The quotient of a and b.
 */
inline int op_div(int const a, int const b) /* Use const and inline */
{
return (a / b);
}
/**
 *op_mod - Returns the remainder of the division of two numbers.
 *@a: The first number.
 *@b: The second number.
 *
 *Return: The remainder of the division of a by b.
 */
inline int op_mod(int const a, int const b) /* Use const and inline */
{
return (a % b);
}
