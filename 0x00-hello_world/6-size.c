#include<stdio.h>
/**
 * main - Prints the size of various typesa based on
 * the computer it is compiled and run on..
 * Return: Always 0.
 * */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu bytes(s)\n"' sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
