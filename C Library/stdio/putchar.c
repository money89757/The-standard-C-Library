/*putchar function*/

#include "xstdio.h"

int (putchar)(int c)
{
	return (fputc(c,stdout)); 
}