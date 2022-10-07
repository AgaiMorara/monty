#include "monty.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to the destiination address
 * @src: pointer to the string
 * Return: destination to pointer
 */


char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;
	if (dest == NULL)
		return (NULL);
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_ptr);
}



/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 * Return: Comparison betw
 * If str1 < str2, the negative difference of the first unmatched characters.
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference of the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/**
 * breakdown - tokenizes the user input and parses it for evaluation
 * @ptr: pointer to the user input string for tokenizing
 */



void breakdown(char *ptr)
{
	char delim[] = " '$'\n", *arr[1024];
	char *portion = strtok(ptr, delim);
	int i = 0;

	if (portion == NULL)
	{
		free(ptr);
		exit(0);
	}
	while (portion != NULL)
	{
		arr[i] = portion;
		i++;
		portion = strtok(NULL, delim);
	}

	if (_strcmp(arr[0], "push") == 0)
	{
		push(atoi(arr[1]));
	}
        else if (_strcmp(arr[0], "pall") == 0)
		pall();
	else if (_strcmp(arr[0], "pint") == 0)
		pint();

}
