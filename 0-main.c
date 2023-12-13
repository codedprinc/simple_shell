#include "hshell.h"
/**
 * main - entry point into the program.
 * @ac: argument counter.
 * @argv: argument holder.
 *
 * Return: 0 if successful.
 */
int main(int ac, char **argv)
{
	(void) ac;
	(void) argv;

	prom_st I = { uI };

	readIn(&I);
	return(0);
}
