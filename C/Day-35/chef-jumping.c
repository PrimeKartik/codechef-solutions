//https://www.codechef.com/problems/OJUMPS

#include <stdio.h>

int main() {
	long n;
	scanf("%lld", &n);
	if ((n-1)%6 == 0 || n%3 == 0) printf("yes");
	else printf("no");
	return 0;
}

