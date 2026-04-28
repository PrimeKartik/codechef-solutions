//https://www.codechef.com/problems/INCGAME

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int x, y, k;
	    scanf("%d %d %d", &x, &y, &k);
	    int max, min;
	    if (x > y){
	        min = y;
	        max = x;
	    }else {
	        min = x;
	        max = y;
	    }
	    if (max >= k){
	        max -= k;
	        if (max > k || min > k){
	            printf("BOB\n");
	            continue;
	        }
	    }
	    printf("ALICE\n");
	}
	return 0;
}

