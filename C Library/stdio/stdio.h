/*stdio.h standard header*/
#ifndef _STDIO
#define _STDIO
#ifndef _YVALS
#include <yvals.h>
#endif
	/*macros*/
#define NULL _NULL
#define _IOFBF 0
#define _IOLBF 1
#define _IONBF 2
#define BUFSIZ 512
#define EOF -1
#define FLIENAME_MAX _FNAMAX
#define FOPEN_MAX _FOPMAX
#define L_tmpnam _TNAMAX
#define TMP_MAX 32
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#define stdin _Files[0]
#define stdout _Files[1]
#define stderr _Files[2]
	/* type definitions */
#ifndef _SIZET
#define _SIZET
typedef _Sizet size_t
#endif 
typedef struct{
	unsigned long _Off;
}fops_t;
typedef struct {
	unsigned short _Mode;
	short _Handle;
	unsigned char *_Buf, *_Bend,*_Next;
	unsigned char *_Rend,*_Rsave,*Wend;
	unsigned char *_Back[2],_Cbuf,_Nback;
	char *_Tmpnam;
} FILE;
	/* declarations */
int fclose(FILE *);
FILE *fopen(const char *, const char *);
size_t fread(void *, size_t, size_t, FILE *);