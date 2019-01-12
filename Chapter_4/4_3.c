#include <stdio.h>

main()
{
	int x, y;
  	printf("Enter x & y: ");
  	scanf("%d%d", &x, &y);
  	printf("x, y: %d %d\n", x, y);
	if (x>y) {
		printf("max = x = %d\n", x);
    }
  	else
   	printf("max = y = %d\n", y);
    printf("* * end * *\n");
}
