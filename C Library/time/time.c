/* time function -- UNIX verison*/
#include <time.h>

	/* UNIX system call */
time_t _Time(time_t *);

time_t (time)(time_t *tod)
{
	time_t t = _Time(NULL) + (70 * 365LU + 17) * 86400;

	if(tod)
		*tod = t;
	return (t);
}
