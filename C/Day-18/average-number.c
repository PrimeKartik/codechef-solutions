// https://www.codechef.com/problems/AVG

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, k, v;
	    scanf("%d %d %d", &n, &k, &v);
	    int x, sum = 0, ans = -1;
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        sum += x;
	    }
	    int y = v*(n+k)-sum;
	    if (y%k==0 && y>0) ans = y/k;
	    printf("%d\n",ans);
	    
	}
	return 0;
}

