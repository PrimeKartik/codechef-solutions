#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int D,d,A,B,C;
	    scanf("%d %d %d %d %d", &D, &d, &A, &B, &C);
	    int ans = 0;
	    int total_run = d*D;
	    if (total_run >= 42) ans = C;
	    else if (total_run >= 21) ans = B;
	    else if (total_run >= 10) ans = A;
	    
	    printf("%d\n", ans);
	}
	return 0;
}

