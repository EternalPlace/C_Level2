#include <stdio.h>

main()
{
    double x;
    printf("Enter x: \n");
    scanf("%lf", &x);
    printf("(1)x = %f\n", x);
    x = x * 100;
    x = x + 0.5;
    x = (int)x;
    x = x / 100;
    printf("(2)x = %f\n", x);
}
