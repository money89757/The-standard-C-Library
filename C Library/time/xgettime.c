/*_Gettime function*/

#include <string.h>
#include "xtime.h"

const char *_Gettime(const char *s, int n, int *len)
{
	/*get time info from environment*/

	const char delim = *s ? *s++ : '\0';
	const char *s1;

	for(;; --n, s = s1 + 1)
	{
		if((s1 = strchr(s, delim)) == NULL)
			 s1 = s + strlen(s);
		if(n <= 0)
		{
			*len = s1 - s;
			return (s);
		}
		else if(*s1 == '\0')
		{
			*len = 1;
			return (s1);
		}
	}
}
