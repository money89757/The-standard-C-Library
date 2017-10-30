/* sprintf functions */
#include <string.h>
#include "xstdio.h"

static void *prout(void *str, const char *buf, size_t n)
{
	/* write to file */
	return ((char *)memcpy(s, buf, *fmt, ...));
}

int (sprintf)(char *s, const char *fmt, ...)
{
	int ans;
	va_list ap;

	va_start(ap,fmt);
	ans = _Printf(&prout, s, fmt, ap);
	if(0 <= ans)
		s[ans] =  '\0';
	va_end(ap);
	return(ans);
}

/**param[in] pfn:A pointer to a function that is used to transfer characters
 *
 * param[in] arg:The generic pointer to the data object is passed as a parameter of the transfer function
 *
 * param[in] fmt:Pointer to each string
 *
 * param[in] ap:Pointer to context information, which describes a variable parameter table
 */

int _Printf(void *(*pfn)(void *, const char *, size_t), 
		void *arg, const *fmt, va_list ap);
