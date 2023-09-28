#include "main.h"

/**
 * get_endianness - fuuction that checks the system bytes
 * Return: 0 or 1
 */

int get_endianness(void)
{
int a = 1;
int endian;

endian = (int) ((char *)&a)[0];
return (endian);
}
