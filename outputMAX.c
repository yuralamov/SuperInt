// Вывод максимального числа

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    printf("Беззнаковое длинное: %30lu\n",ULONG_MAX);
    printf("Беззнаковое длинное длинное: %22llu\n",ULLONG_MAX);
    printf("Целое: %44ld\n",LONG_MAX);
    printf("Длинное длинное целое: %28lld\n",LLONG_MAX);

    return 0;
}
