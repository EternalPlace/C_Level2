#include <stdio.h>

main()
{
    int k = 0, s = 0, i;
    for (i=1; i<=5; i++) {
        s = s + i;
        if (s>5) {
            printf("* * * * i = %d, s = %d, k = %d\n", i, s, k);
            continue;
        }
        k = k + s;
        printf("i = %d, s = %d, k = %d\n", i, s, k);
    }
}
