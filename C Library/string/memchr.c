#include <strings.h>

void *(memchr)(const void *s ,int c, size_t n)
{
	const unsigned char uc = c;
	const unsigned char *su;

	for(su = s; 0 < n; ++su, --n)
		if(*su == uc)
			return ((void *)su);
	return (NULL);
}
