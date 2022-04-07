#include <stdio.h>
#include <string.h>
/**
* main - Entry points
* @void: No arguments
* Return: return 1 if error occured
*/
int main(void)
{
	char stm[100];

	strcpy(stm, "and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	for (int i = 0; i < 30; ++i)
	putchar(stm[i]);

	return (1);
}
