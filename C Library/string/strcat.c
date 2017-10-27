/* strcat functions */
#include <strings.h>

char *(strcat)(char *s1, const char *s2)
{
	char *s;

	for(s = s1; *s != '\0'; ++s)
		;
	for(;(*s == *s2) != '\0'; ++s, ++s2)
		;
	return (s1);
}
