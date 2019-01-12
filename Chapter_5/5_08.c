#include <stdio.h>
#include <math.h>

main()
{
    int k, i, tag;
    printf("2, ");
    for (i=3; i<=100; i+=2) {
        tag = 0;
        for (k=2; tag==0 && k<sqrt(i); k++)
            if (i%k==0) tag = 1;
        if (tag==0) printf("%d, ", i);
    }
}
