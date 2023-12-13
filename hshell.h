#ifndef __HSHELL_H__
#define __HSHELL_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <sys/wait.h>
#include <ctype.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdint.h>
#include <sys/sysmacros.h>
extern char **environ;
typedef struct{
	char *line;
	char **argv;
	size_t len;
	ssize_t n_read;
	int status;
	pid_t child_pid;
}prom_st;

#define uI NULL, \
		NULL, \
	   0, \
		 0, \
		0, \
		0
/*
typedef struct{
	char *cpmd;
	char *cpmcd2;
	char *token;
	char **argv_1;
	int ic;
	int n_tok;
}tok_st;

#define tk_uI NULL, NULL, NULL, NULL, \
		0, \
		0

*/
void readIn(prom_st *input);
char **_tokenizer(char *cmd, char *delim);
#endif
