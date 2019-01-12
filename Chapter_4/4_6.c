#include <stdio.h>

main()
{
    int g;
    printf("Enter a mark: ");
    scanf("%d", &g);
    printf("g = %d: ", g);
    switch (g/10) {
        case 10:
        case 9: printf("A\n");
        case 8: printf("B\n");
        case 7: printf("C\n");
        case 6: printf("D\n");
        default: printf("E\n");
    }
}
