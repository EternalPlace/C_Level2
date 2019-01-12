#include <stdio.h>

main()
{
    int k, i, j;
    for (i=0; i<4; i++) {
        for (k=1; k<=i; k++)
            printf(" ");
        for (j=0; j<7-2*i; j++)
            printf("*");
        printf("\n");
    }
}
