//https://www.codechef.com/problems/CHRISCANDY

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x;
	    scanf("%d", &n);
	    int max = -1, count = 0;
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        if (x > max){
	            max = x;
	        }else count++;
	    }
	    printf("%d\n", count);
	}
	return 0;
}

