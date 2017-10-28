/* fputc function */
#include "xstdio.h"

int (fput)(int ci, FILE *str)
{
	unsigned char c = ci;

	if(str->_Next < str->_Wend)
		;
	else if(_Fwprep(str) < 0)
		return (EOF);
	*str->_Next++ = c;
	if(str->_Mode & (_MLBF|_MNBF))
	{
		str->_Wend = str->_Buf;
		if((str->Mode & _MNBF || c == '\n') && fflush(str))

			return (EOF);	
	}

	return (c);
}