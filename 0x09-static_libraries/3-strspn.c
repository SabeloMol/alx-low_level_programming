#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - function
 * @s: input
 * @accept: input2
 * Return: strspn
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
