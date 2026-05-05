//https://www.codechef.com/problems/DISABLEDKING

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int ans = 0;
	    if (n%2 == 0) ans = n;
	    else ans = n-1;
	    printf("%d\n", ans);
	}
	return 0;
}

