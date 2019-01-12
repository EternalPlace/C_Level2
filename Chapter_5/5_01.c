#include <stdio.h>

main()
{
    int i, sum;
    i = 0; sum = 0;
    while (sum < 10000) {
        sum += i * i;
        i++;
    }
    printf("n = %d sum = %d\n", i-1, sum);
}
