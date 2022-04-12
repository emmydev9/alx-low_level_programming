#include "main.h"
/**
* _islower - print alphabets to the stdout
* @int: takes an integer argument
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
