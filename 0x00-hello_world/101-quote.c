#include <stdio.h>
#include <string.h>
/**
* main - Entry points
* @void: No arguments
* Return: return 1 if error occured
*/
int main(void)
{
	char stm[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(2,stm,59);
	return (1);
}
