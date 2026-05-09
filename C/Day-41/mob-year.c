//https://www.codechef.com/problems/MOBKUN

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, m, k, x;
	    scanf("%d %d %d %d", &n, &m, &k ,&x);
	    int mob = n*k+m;
	    int c = (x+mob-1)/mob;
	    int d = c*mob;
	    if (d >= x && d-m-n < x) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

