//https://www.codechef.com/START238D/problems/TESTTGT

#include <stdio.h>

int main() {
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	int t= x+z;
	if(t < y)printf("0");
	else
	printf("%d", t-y+1);
	return 0;
}

