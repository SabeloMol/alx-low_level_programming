#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */

void rev_string(char *s)
{

	char ch, *p, *q;

	/*
	 * Point q at the last character in s[], or at &s[0] if s is empty.
	 */

	for (q = s; *q != '\0'; ++q)

		if (q > s)
			--q;

	/*
	 * Simultaneously sweep p from front to back and q from back to front,
	 * swapping characters at p and q, until the pointers meet.
	 */

	for (p = s; p < q; ++p, --q)
	{

		ch = *p;
		*p = *q;
		*q = ch;
	}

}
