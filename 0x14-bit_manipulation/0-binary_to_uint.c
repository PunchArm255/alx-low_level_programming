#include "main.h"

/**
 * binary_to_uint - converts binary number to some unsigned int
 * @b: string containing 1's and 0's (binary number)
 *
 * Return: that converted number (Success) | 0 (Failure)
 */
unsigned int binary_to_uint(const char *b)
{
        int i;
        unsigned int unn, pee;

        if (!b)
                return (0);
        i = 0;
        while (b[i])
        {
                if (b[i] != '0' && b[i] != '1')
                        return (0);
                i++;
        }
        --i, unn = 0, pee = 0;
        while (i >= 0)
        {
                unn += (b[i--] - 48) << (pee++);
        }
        return (unn);
}
