// https://www.codechef.com/problems/SPLITN

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    printf("%d\n", __builtin_popcount(n)-1);
	}
	return 0;
}

