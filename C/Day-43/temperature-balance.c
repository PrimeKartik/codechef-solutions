//https://www.codechef.com/problems/TEMPBAL

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x;
	    long long sec = 0, sum = 0;
	    scanf("%d", &n);
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        sum += x;
	        sec += llabs(sum);
	    }
	    printf("%lld\n", sec);
	}
	return 0;
}

