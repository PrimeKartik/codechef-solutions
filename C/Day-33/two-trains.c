//https://www.codechef.com/problems/TWOTRAINS

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int x, sum = 0, max = 0;
	    for (int i = 0; i<n-1; i++){
	        scanf("%d", &x);
	        sum+=x;
	        if (max < x) max = x;
	    }
	    printf("%d\n", sum+max);
	}
	return 0;
}

