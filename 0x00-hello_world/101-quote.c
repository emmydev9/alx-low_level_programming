#include <stdio.h>
#include <string.h>
/**
* main - Entry points
* @void: No arguments
* Return: return 1 if error occured
*/
int main(void)
{
	char stm[60];
	int i = 0;

	strcpy(stm, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	for (; i < 60; i++)
	putchar(stm[i]);

	return (1);
}
