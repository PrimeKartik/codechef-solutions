//https://www.codechef.com/problems/LARGSMALL

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x, min = 1000, max = -1000;
	    scanf("%d", &n);
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        if (x<min) min = x;
	        if (x>max) max = x;
	    }
	    if (max == min) printf("0\n");
	    else printf("%d\n", max-min-1);
	}
	    return 0;
}

