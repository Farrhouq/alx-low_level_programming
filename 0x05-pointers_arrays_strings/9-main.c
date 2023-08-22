#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "zhhh";
    char *ptr;

    ptr = _strcpy(s1, "z");
    printf("%s", ptr);
    printf("\n");
    return (0);
}