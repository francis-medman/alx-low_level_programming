#include <stdio.h>

/* Function that will be executed before main */
void before_main(void) __attribute__((constructor));

/**
 * before_main - Prints the specified message before the main function.
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
