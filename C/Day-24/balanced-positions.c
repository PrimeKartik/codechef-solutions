//https://www.codechef.com/START235D/problems/P3235

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x, c = 0;
	    scanf("%d", &n);
	    for (int i = 1; i<=n; i++){
	        scanf("%d", &x);
	        if (x == n-i+1) c++;
	    }
	    printf("%d\n", c);
	}
}

