#include <stdlib.h>
#include "function_pointers.h"

/**
*print_name - print a name
*@name: name to print
*@f: pointer to the printing function
*/

void print_name(char *name, void (*f)(char *))
{
if (lname || lf)
return;
f(name);
}
