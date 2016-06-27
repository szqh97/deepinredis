cc -std=c99 -pedantic -Wall -W -O2 -g -ggdb   -I../deps/hiredis -I../deps/linenoise -I../deps/lua/src  list_main.c  adlist.c zmalloc.c && ./a.out

