//https://www.codechef.com/problems/WALK

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x, max = -1;
	    scanf("%d", &n);
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        if (max < x+i) max = x+i;
	    }
	    printf("%d\n", max);
	}
	return 0;
}

