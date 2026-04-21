//https://www.codechef.com/problems/REPEAT

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, k, s;
	    scanf("%d %d %d", &n, &k, &s);
	    int base_sum = n*n;
	    int extra_sum = s - base_sum;
	    int x = extra_sum/(k-1);
	    printf("%d\n", x);
	}
	return 0;
}

