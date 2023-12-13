#ifndef __MAIN_H__
#define __MAIN_H__

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
/*statments for main.c*/
extern char *line;// = NULL;
extern char *line_copy;// = NULL;
extern char **argv;// = NULL;
extern size_t len;// = 0;
extern ssize_t nread;
extern pid_t child_pid;
extern int status;

/*statements for tokenizer.c */
extern char **argv_1;// = NULL;
extern char *cpcmd;// = NULL;
extern char *cpcmd2;// = NULL;
extern int n_tokens;// = 0;
extern char *token;// = NULL;
extern int i;// = 0;

/*function prototypes*/
size_t _strcspn(const char *s, const char *reject);
int _strncmp(const char *s1, const char *s2, size_t n);
size_t _strcspn(const char *s, const char *reject);
size_t _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
char *_strncpy(char *dest, const char *src, size_t n);
char *_strdup(const char *s);
char **_tokenizer(char *cmd, char *delim);
#endif
