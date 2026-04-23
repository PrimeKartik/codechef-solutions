//https://www.codechef.com/problems/VACCINE2

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, d, x;
	    scanf("%d %d", &n, &d);
	    int risk = 0, non_risk = 0;
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        if (x >= 80 || x <= 9) risk++;
	        else non_risk++;
	    }
	    int ans = ((risk+d-1)/d) + ((non_risk+d-1)/d);
	    printf("%d\n", ans);
	    
	}
	return 0;
}

