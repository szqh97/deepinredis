#include "redis.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    dict* d = dictCreate(&setDictType, NULL);
    dictExpand(d, 10);

    printf("dict size is %lu\n", dictSize(d));
    printf("dict slots is %lu\n", dictSlots(d));
    return 0;
}
