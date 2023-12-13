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
/**
 * struct gb_var - contains varivales used in made up functions.
 * @line:d
 * @argv:d
 * @len:d
 * @nread:d
 * @child_pid:d
 * @status:d
 */
typedef struct gb_var
{
	char **line;
	char **argv;
	size_t len;
	ssize_t nread;
	pid_t child_pid;
	int status;
}mj_var;

#define VAR_VAL \
	{NULL, NULL, NULL, 0, 0, 0, 0}
/*Function protoypes - name of file*/

#endif
