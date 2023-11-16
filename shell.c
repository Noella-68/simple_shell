#include "shell.h"

/**
 * main - Entry point for the shell program
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char signal[200];

	while (true)
	{
		show_prompt();
		read_signal(signal), sizeof(signal);
		exec_signal(signal);
	}

	return (0);
}
