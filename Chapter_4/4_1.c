#include <stdio.h>

main()
{
    int x, y;
    printf("Enter x & y; \n");
    scanf("%d%d", &x, &y);
    printf("x, y: %d %d\n", x, y);
    if (x>y) printf("x = %d\n", x);
    if (x<y) printf("y = %d\n", y);
    if (x==y) printf("x == y %d: \n", x);
}
