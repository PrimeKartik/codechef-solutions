//https://www.codechef.com/problems/CHEFAPAR

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, first = 0, x, sum = 0;
	    scanf("%d", &n);
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        if (x == 0) first = 1;
	        if (first) sum+=100;
	        if (!x) sum += 1000;
	    }
	    printf("%d\n", sum);
	}
	return 0;
}

