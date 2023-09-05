#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point.
 * Description- adds numbers
 * @argc: the number of arguments
 * @argv: the argument list
 * Return: 0 always
 */
int main(int argc, char **argv)
{

    int i;
    int res;

    for (i = 1; i < argc; i++)
    {
        char *endptr;
        long result = strtol(argv[i], &endptr, 10);
        if (*endptr != '\0')
        {
            printf("Error\n");
            return (1);
        }
        else
        {
            res += result;
        }
   }
    printf("%d\n", res);
    return (0);
}
