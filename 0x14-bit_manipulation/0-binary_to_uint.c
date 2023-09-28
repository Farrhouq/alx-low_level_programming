#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number as a string
 */
unsigned int binary_to_uint(const char *b)
{
    int i, j, pv = 1, len = 0;
    unsigned int value = 0;

    if (b == NULL)
        return (0);

    for (i = 0; b[i]; i++)
        len++;

    for (i = len - 1; i >= 0; i--)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);

        if (b[i] == '1')
        {
            pv = 1;
            if (i == (len - 1))
            {
                pv = 1;
            }
            else
            {
                for (j = 0; j < (len - i - 1); j++)
                    pv *= 2;
            }
            value += pv;
        }
    }
    return (value);
}
