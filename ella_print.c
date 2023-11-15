#include "shell.h"

/**
 * ella_print - Prints a string to the standard output
 * @jay: The string to be printed
 */
void ella_print(const char *jay)
{
	write(STDOUT_FILENO, jay, strlen(jay));
}
