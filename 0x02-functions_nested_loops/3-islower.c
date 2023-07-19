/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	/* Using tabs for indentation instead of spaces */
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
