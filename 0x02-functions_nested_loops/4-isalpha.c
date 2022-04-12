#include "main.h"
/**
* _isalpha - print alphabets to the stdout
* @c: takes an integer argument
* Return: returns 1 if lowercase character is met
**/
int  _isalpha(int c)
{
	if (c >= 65 && !(c >= 91 && c <= 96) && c <= 122)
{
	return (1);
}
	else
{
	return (0);
}
	_putchar('\n');

}
