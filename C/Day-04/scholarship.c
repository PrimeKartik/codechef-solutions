#include <stdio.h>

int main() {
	int r;
	scanf("%d", &r);
	if (r < 51) printf("100");
	else if (r < 101) printf("50");
	else printf("0");
	return 0;
}

