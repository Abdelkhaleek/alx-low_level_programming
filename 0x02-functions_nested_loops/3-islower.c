#include "main.h"
/**
 * _islower - Shows 1 if the input is lowercase
 * @c: The character to be checked.
 * Return:(1) for lowercase character, 0 for the rest.
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
