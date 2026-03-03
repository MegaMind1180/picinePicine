#include <unistd.h>
#include <stdio.h>

void hs(long long i)
{
    if (i > 9)
        hs(i / 10);
    write(1, &"0123456789"[i % 10], 1);
}
