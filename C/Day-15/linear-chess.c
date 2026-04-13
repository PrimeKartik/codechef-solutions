// https://www.codechef.com/problems/LINCHESS

#include <stdio.h>
#include <limits.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n, k;
	    scanf("%d %d", &n, &k);
	    int x, c , ans = 0, c_min = INT_MAX;
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        if (k%x == 0 && k >= x){
	            c = k/x;
	            if (c < c_min){
	            c_min = c;
	            ans = x;
	            }
	        }
	    }
	    if (ans) printf("%d\n", ans);
	    else printf("-1\n");
	}
	return 0;
}

