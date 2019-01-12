#include <stdio.h>

main()
{
    float r, s, Pi = 3.1416;
    for (r=0.5; r<=2.5; r+=0.5) {
        s = Pi * r * r;
        printf("r = %3.1f s = %f\n", r, s);
    }
}
