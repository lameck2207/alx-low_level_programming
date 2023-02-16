#include <unistd.h>
/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 * followed by a newline, to standard error.
 * Return: Always 1.
 */
int main(void)
{
	write(2, "and a piece of art is useful\n", 59);
	return (1);
}
