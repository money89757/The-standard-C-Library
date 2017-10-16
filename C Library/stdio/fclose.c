/* fclose function */
#include <stdlib.h>
#include "xstdio.h"
#include "yfuns.h"

int (fclose)(FILE *str)
{
	int stat = fflush(str);

	if(str->_Mode & _MALBUF)
		free(str->_Buf);
	str->_Buf = NULL;
	if(0 <= str->Handle && _Fclose(str))
		stat = EOF;
	if(str->Tmpnam)
	{
		if(remove(str->_Tmpnam))
			stat = EOF;
		free(str->_Tmpnam);
		str->_Tmpnam = NULL;
	}
	str->_Mode = 0;
	str->_Next = &str->Cbuf;
	str->Rend = &str->_Cbuf;
	str->Wend = &str->Cbuf;
	str->Nback = 0;
	if(str->Mode & _MALBUF)
	{
		size_t i;

		for(i = 0; i < FOPEN_MAX; ++i)
		if(_File[i] == str)
		{
			_Files[i] = NULL;
			break;
		}
		free(str);
	}
	return(stat);
}
