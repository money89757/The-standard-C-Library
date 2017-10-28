/* gets functions */
#include <string.h>
#include "xstdio.h"

char *(gets)(char *buf)
{
	unsigned char *s;

	for(s = (unsigned char *)buf; stdin->_Nback;)
	{
		*s = stdin->_Back[--stdin->_Nback];
		if(stdin->_Nback == 0)
			stdin->_Rend = stdin->_Rsave;
		if(*s++ == '\n')
		{
			s[-1] = '\0';
			return (buf);
		}
	}

	for(; ;)
	{
		if(stdin->_Next < stdin->_Rend)
			;
		else if(_Frprep(stdin) < 0)
			return (NULL);
		else if (stdin->_Mode & _MEOF)
			break;
		{
			unsigned char *s1 = memchr(stdin->_Next, '\n', stdin->_Rend - stdin->_Next);

			size_t m = (s1 ? s1 + 1 : stdin->_Rend) - stdin_>_Next;

			memcpy(s, stdin->_Next, m);
			s += m; 
			stdin->_Next += m;
			if(s1)
			{
				s[-1] = '\0';
				return (buf);
			}

		}
	}

	if(s = (unsigned char *)buf)
		return (NULL);
	else
	{
		*s = '\0';
		return (buf);
	}
}