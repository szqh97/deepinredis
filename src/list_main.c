#include <stdio.h>
#include <stdlib.h>
#include "adlist.h"
int main()
{
    list *l = listCreate();

#if 0
    int* i1 = (int*)malloc(10);
    int* i2 = (int*)malloc(20) ;
    int* i3 = (int*)malloc(30) ;
    int* i4 = (int*)malloc(40) ;
    l = listAddNodeHead(l, i1);
    l = listAddNodeHead(l, i2);
    l = listAddNodeHead(l, i3);
    l = listAddNodeHead(l, i4);
    l = listAddNodeTail(l, i4);
#endif
    l = listAddNodeHead(l , (void*) 10);
    l = listAddNodeHead(l , (void*) 20);
    l = listAddNodeHead(l , (void*) 30);
    l = listAddNodeHead(l , (void*) 40);

    list *l2 = listDup(l);


    for (int i = 0; i < listLength(l); ++i){
        printf("the %d item is %d\n", i, listIndex(l, i)->value );
    }

    listNode *node;
    listIter* iter = listGetIterator(l2, 1);
    while ((node = listNext(iter)) != NULL) {
        printf("get value by iter: %d\n", node->value);
    }


    listReleaseIterator(iter);

    for (int i = -1; i >= -listLength(l); --i)
        printf("get value by %d: %d\n", i, listIndex(l, i)->value);

    if (l != NULL) {
        printf("list length is %lu\n", listLength(l));
    }


    listRelease(l);
    return 0;
}
