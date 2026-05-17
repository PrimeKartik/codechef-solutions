//https://www.codechef.com/problems/LIFTME

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, q;
	    scanf("%d %d", &n, &q);
	    long long lift = 0;
	    int prev = 0, x, y;
	    for (int i = 0; i<q; i++){
	        scanf("%d %d", &x, &y);
	        lift += abs(prev-x);
	        lift += abs(x-y);
	        prev = y;
	    }
	    printf("%lld\n", lift);
	}
	return 0;
}

