#include <stdio.h>

main()
{
    int g;
    printf("Enter g: ";
    scanf("%d", &g);
    printf("g = %d: ", g);
    if (g>=90) printf("A\n");
    else if (g>=80) printf("B\n");
    else if (g>=70) printf("C\n");
    else if (g>=60) printf("D\n");
    else printf("E\n");
}
