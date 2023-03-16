#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strncat - func
 * @dest: input
 * @src: inpt2
 * @n: input 3
 * Return: all
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
