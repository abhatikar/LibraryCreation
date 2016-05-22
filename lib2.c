#include <stdio.h>
#include "lib1.h"

int lib2function()
{
	printf("Lib2 function called\n");
	return lib1function();
}
