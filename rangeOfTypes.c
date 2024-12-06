#include <stdio.h>

int main()
{
    int x;
    x = 33ul;
    // Attempt to assign a value outside the range of a 32-bit int
    printf("%lld\n", x);
    return 0;
}
