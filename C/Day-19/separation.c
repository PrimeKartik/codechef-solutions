//https://www.codechef.com/problems/SEPX

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x, a;
	    scanf("%d %d", &n, &x);
	    int exist = 0, big_only = 1, small_only = 1;
	    for (int i =0; i<n; i++){
	        scanf("%d", &a);
	        if (a == x) exist = 1;
	        if (a < x) big_only = 0;
	        if (a > x) small_only = 0;
	    }
	    if (exist || big_only || small_only) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

