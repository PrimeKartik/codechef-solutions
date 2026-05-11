//https://www.codechef.com/problems/ALEXNUMB

#include <stdio.h>


int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x;
	    scanf("%d", &n);
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	    }
	    printf("%lld\n", (1LL *n*(n-1))/2);
	}
	return 0;
}