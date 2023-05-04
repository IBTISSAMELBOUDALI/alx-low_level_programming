#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	union {
		int i;
		char c[sizeof(int)];
	} endian;

	endian.i = 1;

	return (endian.c[0] == 1);
}
