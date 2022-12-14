#ifndef FILE_H
#define FILE_H
#define  _POSIX_C_SOURCE 200809L
extern unsigned int line_number;

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
void breakdown(char *ptr);


void push (int a);
int pop ();
void pall();
void pint();
void swap();

/**
 * struct node - container of objects in linked ;ost
 *@ int value: data structure for integers to be pushed or pulled
 *@next - address of next node;
 *@prev - address of previous node;
 */

typedef struct node *nodePtr;
struct node{
	int value;
	nodePtr next;
	nodePtr previous;
} *top;

extern int linecount;

typedef struct node node;

#endif
