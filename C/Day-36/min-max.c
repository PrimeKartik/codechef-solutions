//https://www.codechef.com/problems/MINORMAX

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x, pos = 1;
	    scanf("%d", &n);
	    int min = 100001, max = 0;
	    for(int i = 0; i<n; i++){
	        scanf("%d", &x);
	        if (min > x) min = x;
	        if (max < x) max = x;
	        if (min != x && max != x) pos = 0;
	    }
	    if (pos) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

