// https://www.codechef.com/problems/SUPINC

#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, k, x, pos = 1;
	    scanf("%d %d %d", &n, &k, &x);
	    if (x <= pow(2, k-1)) pos = 0;
	    if (pos) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

