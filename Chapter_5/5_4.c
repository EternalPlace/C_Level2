#include <stdio.h>

main()
{
    int f1, f2, f;
    f1 = 0;
    f2 = 1;
    do {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    } while (f2 <= 1000);
    printf("F = %d\n", f2);
}
