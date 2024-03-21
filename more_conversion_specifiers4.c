#include "main.h"

/**
 * numtohex - Function that converts an unsigned long int to a
 * hexadecimal str representation.
 * @buf: Pointer to the char buff where the hex str will be stored.
 * @buf_max: Maximum number of chars that can be stored in the buff,
 * including the '\0'.
 * @number: The int to be converted to hexadecimal.
 *
 * Return: A pointer to the beginning of the str stored in buf,
 * NULL if otherwise.
 */

char *numtohex(char *buf, size_t buf_max, unsigned long number)
{
	char *magic;
	unsigned int digit;

	if (buf_max < 2)
		return (NULL);

	magic = buf + buf_max - 1;

	*magic-- = '\0';

	for (; number != 0; number >>= 4)
	{
		if (magic == buf)
			return (NULL);

		digit = number & 0xF;

		*magic-- = "0123456789abcdef"[digit];
	}

	return (magic + 1);
}
