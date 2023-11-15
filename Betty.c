#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    write(1, "Betty Checks Ella\n", 18);
    return 0;
}
