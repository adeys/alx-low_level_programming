#include <stdio.h>

/**
 * startup_func - prints a string before main function execution
 * Return: void
 */
__attribute__((constructor))
void startup_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
