#include <unistd.h>
#include "main.h"
/**
* _putchar - print out characters
* @char: Takes a char 
* Return: return -1 if error occurs
**/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
