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
	size_t len;
}prom_st;

void readIn(prom_st *input);
#endif
