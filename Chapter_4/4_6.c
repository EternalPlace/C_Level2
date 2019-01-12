#include <stdio.h>

main()
{
    int g;
    printf("Enter a mark: ");
    scanf("%d", &g);
    printf("g = %d: ", g);
    switch (g/10) {
        case 10:
        case 9: printf("A\n"); break;
        case 8: printf("B\n"); break;
        case 7: printf("C\n"); break;
        case 6: printf("D\n"); break;
        default: printf("E\n");
    }
}
