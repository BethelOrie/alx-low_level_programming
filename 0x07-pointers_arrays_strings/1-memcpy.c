#include "main.h"

/**
*_memcpy - function that copies memory area
*@dest: dest memory are
*@src: source memory area
*@n: bytes from memory area to copy
*
*Return; memory area replaced
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
dest[a] = src[a];
}

return (dest);
}
