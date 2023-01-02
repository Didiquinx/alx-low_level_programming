#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes tha character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on errer, -1 is return, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1);
}
