// Вывод максимального числа
// Как я понимаю, у ULLONG_MAX, ULONG, lu, llu предел один

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    unsigned long a;
    a = ULONG_MAX;
    printf("%lu\n",a);

    return 0;
}
