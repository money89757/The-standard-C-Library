/* fgets function */
#include <string.h>
#include "xstdio.h"

char *(fgets)(char *buf,int n,FILE *str)
{
	unsigned char *s;

	if(n <= 1)
		return NULL;
}
