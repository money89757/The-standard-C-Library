/* strncat functions */

#include <strings.h>

char *(strncat)(char *s1, const char *s2, size_t n)
{
	char *s;

	for(s = s1; *s != '\0'; ++s)
		;
	
	for(; 0 < n && *s2 != '\0'; --n)
		*s1++ = *s2++;
	*s = '\0';
	return(s1);
}
