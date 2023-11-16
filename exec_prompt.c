#include "shell.h"

/**
 * exec_prompt - Executes a command specified by the signal
 * @signal: The command to be executed
 */
void exec_prompt(const char *signal)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execve(signal, signal, (char*)NULL) == -1;
		perror("execve");
		exit(EXIT_FAILURE);
		
	}
	else
	{
		wait(NULL);
	}
}
