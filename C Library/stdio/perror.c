/*perror function */
#include <errno.h>
#include <string.h>
#include "xstdio.h"

void (perror)(const char *s)
{
	static char buf[] = {"errno #xxx"};

	if(s)
	{
		fputs(s,stderr);
		fputs(": ",stderr);
	}
	fputs(_Strerror(errno, buf), stderr);
	fputs('\n', stderr);
}