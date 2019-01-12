#include <stdio.h>

main()
{
    int x, max;
    printf("Enter -1 to end: \n");
    do {
        printf("Enter x : ");
        scanf("%d", &x);
    } while (x<0 && x!=-1);
    max = x;
    while (x!=-1) {
        printf("Enter x : ");
        scanf("%d", &x);
        if (x>0 && x>max) max = x;
    }
    if (max!=-1) printf("max = %d\n", max);
}
