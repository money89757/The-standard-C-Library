/*gmtime function*/

#include "xtime.h"

struct tm *(gmtime)(const time_t *tod)
{
	return (_Ttotm(NULL, *tod, 0));
}
