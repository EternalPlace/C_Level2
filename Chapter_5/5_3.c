#include <stdio.h>
#include <math.h>

main()
{
    double x1, x2;
    x1 = 0.0;
    x2 = cos(x1);
    while (fabs(x1-x2)>1e-6) {
        x1 = x2;
        x2 = cos(x1);
    }
    printf("x = %f\n", x2);
}
