/* strcpy function */

#include <strings.h>

char *(strcpy)(char *s1, const char *s2)
{
	char *s = s1;

	for(s = s1; (*s++ = *s2++ ) != '\0';)
		;
	return (s1);
}
