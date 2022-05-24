#include <stdio.h>
#include <stdlib.h>

/**
* c_main - function executes before main
* Return: int.
**/

void __attribute__((constructor)) c_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
