//
//  MSVC - heapcheck
//

#include <stdio.h>
#include <malloc.h>
#include <assert.h>

#include "heapcheck.h"


int
HeapCheck(unsigned limit)
{
        _HEAPINFO hinfo = {0};
        unsigned numLoops = 0;
        int heapstatus;

        while ((heapstatus = _heapwalk(&hinfo)) == _HEAPOK && numLoops < limit)  {
                ++numLoops;
        }

        switch (heapstatus) {
        case _HEAPEMPTY:
                return 1;
        case _HEAPEND:
                return 1;
        }

        printf("%8s block at %p of size %4.4X\n",
            (hinfo._useflag == _USEDENTRY ? "USED" : "FREE"), hinfo._pentry, hinfo._size);

        switch (heapstatus) {
        case _HEAPBADPTR:
                printf("ERROR - bad pointer to heap\n");
                break;
        case _HEAPBADBEGIN:
                printf("ERROR - bad start of heap\n");
                break;
        case _HEAPBADNODE:
                printf("ERROR - bad node in heap\n");
                break;
        }

        assert(0);

        return 0;
}


void
HeapDump(unsigned limit)
{
        _HEAPINFO hinfo;
        int heapstatus;
        unsigned numLoops = 0;

        hinfo._pentry = NULL;

        while ((heapstatus = _heapwalk(&hinfo)) == _HEAPOK && numLoops < limit)  {
                printf("%8s block at %p of size %4.4X\n",
                    (hinfo._useflag == _USEDENTRY ? "USED" : "FREE"), hinfo._pentry, hinfo._size);
                ++numLoops;
        }

        switch (heapstatus) {
        case _HEAPEMPTY:
                printf("OK - empty heap\n");
                break;
        case _HEAPEND:
                printf("OK - end of heap\n");
                break;
        case _HEAPBADPTR:
                printf("ERROR - bad pointer to heap\n");
                break;
        case _HEAPBADBEGIN:
                printf("ERROR - bad start of heap\n");
                break;
        case _HEAPBADNODE:
                printf("ERROR - bad node in heap\n");
                break;
        }
}


//end