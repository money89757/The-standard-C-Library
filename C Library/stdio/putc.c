/* putc function */
#include "xstdio.h"

int (putc)(int c, FILE *str)
{
	return (fputc(c,str));
}