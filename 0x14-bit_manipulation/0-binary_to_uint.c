#include "main.h"

/**
 * a function of c 
 * binary to number - unsigned integer will be developed
 * @b; it will contain our string to be converted
 * 
 * Returns: converted number, or 0 if there is one or more chars in the string b that is not 0 or 1.
 *
 */

unsigned int binary_to_uint(const char *b) 
{
    unsigned int result = 0;

    if (b == NULL)
    {
	    return 0;
    }
    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] == '0' || b[i] == '1') {
            result = (result << 1) + (b[i] - '0');
        } else {
            return 0;
        }
    }
    return result;
}

