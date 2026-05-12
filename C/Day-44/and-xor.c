//https://www.codechef.com/problems/AXNODR

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    long long n;
	    scanf("%lld", &n);
	    long long b = 3;
	    if (n%4 == 1) b = n;
	    else if (n%4 == 0) b = n+3;
	    printf("%lld\n", b);
	}
	return 0;
}

