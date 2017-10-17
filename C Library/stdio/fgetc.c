/* fgetc function */
#include "xstdio.h"

int (fgetc)(FILE *str)
{
	if(0 < str->_Nback)
	{
	if(--str->_Nback == 0)
		str->_Rend =  str->_Rsave;
	return (str->_Back[str->_Nback]);
	}
	
	if(str->_Next < str->_Rend)
		;
	else if(_Frprep(str) <= 0)
		return(EOF);

	return (*str->_Next++);
}
