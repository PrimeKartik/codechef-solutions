//https://www.codechef.com/problems/S02E10

#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x, k;
	    scanf("%d %d %d", &n, &x, &k);
	    int a[n], b[n];
	    for (int i = 0; i<n; i++){
	        scanf("%d", &a[i]);
	    }
	    for (int i = 0; i<n; i++){
	        scanf("%d", &b[i]);
	    }
	    for (int i = 0; i<n; i++){
	        int diff = abs(a[i] - b[i]);
	        if (diff <= k) x--;
	        if (x == 0) break;
	    }
	    if (x==0) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

