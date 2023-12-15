#ifndef __HEADER_H__
#define __HEADER_H__

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

#define BUFSIZE 1024

/*function prototypes*/
void interactive(void);
void non_Interactive(char *inputbuf);
void prompt();
void file_checker(char *data);
#endif
