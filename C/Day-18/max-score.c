// https://www.codechef.com/problems/MAXSCORE7

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x, a = 0, b = 0;
	    scanf("%d", &n);
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        if (x == 1) a++;
	        else b++;
	    }
	    printf("%d\n", (a < b) ? a : b);
	}
	return 0;
}

