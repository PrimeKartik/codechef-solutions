// https://www.codechef.com/START234D/problems/COOLER7

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, m;
	    scanf("%d %d", &n, &m);
	    int sum = 0;
	    while(n > m){
	        sum += n;
	        n--;
	    }
	    printf("%d\n", sum);
	}
}

