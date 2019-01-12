#include <stdio.h>

main()
{
    int i, sum;
    sum = 0;
    for (i=0; i<=100; i++) {
        sum += i;
    }
    printf("sum = %d\n", sum);
}
