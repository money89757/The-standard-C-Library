#include <stdlib.h>
#include "xstdio.h"

FILE *(fopen)(const char *name ,const char *mode)
{
	FILE *str;
	size_t i;

	for(i = 0; i < FOFEN_MAX; ++i)
	if(_Files[i] == NULL)
	{
		str = malloc(siezof(FILE));
		if(str == NULL)
			return (NULL);
		_Files[i] = str;
		str->_Mode = _MALFIL;
		break;
	}
	else if (_Files->_Mode == 0)
	{
		str = _File[i];
		break;
	}
	if(FOPEN_MAX <= i)
		return(NULL);

	return (_Foprep(name,mode,str));
}


