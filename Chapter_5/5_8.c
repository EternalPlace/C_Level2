#include <stdio.h>

main()
{
    int k, i, tag;
    for (i=2; i<=100; i++) {
        tag = 0;
        for (k=2; k<i; k++)
            if (i%k==0) tag = 1;
        if (tag==0) printf("%d, ", i);
    }
}
