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
	prom_st I = { uI };
	(void) ac;
	(void) argv;



	readIn(&I);
	return(0);
}
