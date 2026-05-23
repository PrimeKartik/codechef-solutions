//https://www.codechef.com/problems/DRAGNXOR

#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, a, b, ans = 0;
	    scanf("%d %d %d", &n, &a, &b);
	    int count = __builtin_popcount(a) + __builtin_popcount(b);
	    if (count > n) {
	        int diff = count - n;
	        count -= 2*diff;
	    }
	    while(count--){
	        ans += pow(2, n-1);
	        n--;
	    }
	    printf("%d\n", ans);
	}
	return 0;
}

