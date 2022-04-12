#include "main.h"
#include "stdio.h"
/**
* main - Entry point
* @void: No argument needed
* Return: returns 0 if no error occured
**/
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}