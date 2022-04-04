#include "main.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
/**
 * _strdup - a function which a copies a given string return a pointer to it
 * @str: a string 
 * Return: NULL if unsuccessful allocation return
 * char pointer to copied string if allocation completed with success
 */
char *_strdup(char *str)
{
	if(str == NULL)
		return (NULL);
	int len = strlen(str);
	char *p = (char *)malloc(sizeof(char) * len);
	int i;
	if(p == NULL)
		return (NULL);
	for(i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
