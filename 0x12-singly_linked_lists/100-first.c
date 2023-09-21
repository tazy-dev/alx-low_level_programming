#include <stdio.h>

void constructor(void) __attribute__((constructor));
/**
 * constructor - A function that prints a string
 *              before the main function start executing
 */
void constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
