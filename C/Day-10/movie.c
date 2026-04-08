#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, m, a, b, c;
	    scanf("%d %d %d %d %d", &n, &m, &a, &b, &c);
	    int min = (n < m)? n : m;
	    int total = (c * min) + ((n-min) * a) + ((m-min) * b);
	    printf("%d\n", total);
	}
	return 0;
}

