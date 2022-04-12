#include "main.h"
/**
* _islower - print alphabets to the stdout
* @c: takes an integer argument
* Return: returns 1 if lowercase character is met
**/
int  _islower(int c)
{
	if (c >= 97 && c <= 122)
{
	return (1);
}
	else
{
	return (0);
}
	_putchar('\n');

}
