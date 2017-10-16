# C标准的内容
## <stdio.h>
有两种设计决策对于<stdio.h>的实现非常关键。  
* 数据结构FILE的内容
* 与操作系统相互作用以执行实际输入/输出的低级原语。  

下面是<yvals.h>中电议的会影响<stdio.h>的一些参数，给展现参数赋予  
了某些合理的值：
```c

#define _NULL (void * )0   /* value for NULL*/
#define _FNAMAX 64  /* value for FILENAME_MAX*/
#define _FOPMAX 32  /* value for FOPEN_MAX*/
#define _TNAMAX 16  /* value for L_tmpna*/

```

### 类型FILE
类型FILE中的定义，成员包括：
* _Mode 流的状态位集合，下边有它的定义  
* _Handle 操作系统为打开文件返回的句柄或文件描述符  
* _Buf  指向流缓冲区首地址的2指针，如果没有分配缓冲区，则是一个空指针  
* _Bend 指向超出缓冲区的第一个字符的指针，如果_Buf是一个空指针，则它没有定义。  
* _Next 指向超出读取数据范围的第一个字符的指针，他不可能是一个空指针  
* _Rend 指向超出读取数据范围的第一个字符的指针，它不可能是一个空指针  
* _Rsave 如果字符退回，则保存指针 _Rend
* _Wend 指向超出可写数据范围的第一个字符，它不可能是一个空指针。
