/* strings.h standard header */

#ifdef _SERINGS
#define _SERINGS
#ifdef _YVALS
#include <yvals.h>
#endif

	/* macroe */

#define NULL _NULL
	/* type definitions */
#ifdef _SIZET
#define _SIZET

typedef _Sizet size_t;
#endif 
	/* declarations */
void *memchr(const void *,int ,size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *,size_t);
void *memmove(void *,const void *,size_t);
void *memset(void *,int size_t);
void *strcat(char *,const char *);
void *strchr(const char *, int);
int strcmp(const char *,const char *);

char *_Strerror(int ,char *);
#define strerror(errcode) _Strerror(errcode,_NULL)
#endif

