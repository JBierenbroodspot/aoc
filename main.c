#include <stdio.h>
#include <stddef.h>
#include <limits.h>

typedef struct YearDay {char year[5]; char day[3];} YearDay_t;


unsigned long hash_year(size_t size, char year[restrict size]) {
    unsigned long hash = 0x0L;
    hash = (unsigned long)year[0];
    ptrdiff_t i = 1;
    for (; i < 5; i++) hash = (hash << CHAR_BIT) | year[i];
    return hash;
}

int main(int argc, char *argv[]) {
    return 0;
}