#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strpbrk - function
 * @s: param
 * @accept: param2
 * Return: strpbrk
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
