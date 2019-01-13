#include <stdio.h>

main()
{
    char ch;
    int i;
    for (i=0; i<26; i++) {
        ch = i + 65;
        if (i%2==0) printf("\n");
        printf("c = %c ASCII = %d", ch, ch);
    }
    putchar('\n');
}
