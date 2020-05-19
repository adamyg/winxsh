#pragma once
#ifndef HEAPCHECK_H_INCLUDED
#define HEAPCHECK_H_INCLUDED
 
 #include <sys/cdefs.h>
 
__BEGIN_DECLS
extern int      HeapCheck(unsigned limit);
extern void     HeapDump(unsigned limit);
 __END_DECLS
 
#endif //HEAPCHECK_H_INCLUDED
//end
