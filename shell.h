#ifndef SHELL_H
#define SHELL_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include <stdarg.h>
#include<sys/types.h>
#include<sys/wait.h>
extern char **environ;

ssize_t _getline(char **p, size_t *n, FILE *f);
char *_strtok(char *s, const char *e);
char **_too(char *s);
int _printf(const char *format, ...);
void ctrl_d(int x, char *k);
int _atoi(char *h);

void m_exx(char *u, char **e);

char *paath(char *s, char *b);

void m_exit(char **e, int d, char *k, char *c);

void _free(char *s, char **e);

char *pathen(char **t);

void _err(int w, char *j, char *c);

char *_scan(char *s);

void non_rec(char *r);

char *u_thass(char **e, char *z, char *r);

void existance(char **e, char *c, char *u);

void act_mod(char *r);



#endif
