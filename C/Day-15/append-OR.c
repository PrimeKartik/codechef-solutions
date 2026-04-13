// https://www.codechef.com/problems/APPENDOR

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, y;
	    scanf("%d %d", &n, &y);
	    int ans = 0, x;
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        ans |= x;
	    }
	    
	    if ((ans|y) != y) printf("-1\n");
	    else printf("%d\n", ans^y);
	}
	return 0;
}

