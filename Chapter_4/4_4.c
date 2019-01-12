#include <stdio.h>

main()
{
	int n;
	printf(“input n: ”);
	scanf(“%d”, &n);
	if (n%3==0)
		printf(“n = %d YES\n”, n);
	else
		printf(“n = %d NO\n”, n);
}