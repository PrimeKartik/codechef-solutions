#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    if (n == 1){
	        printf("-1\n");
	        continue;
	    }
	    if (n%2 == 1){
	        printf("1 2 -3 ");
	        n -= 3;
	    }
	    
	    for (int i = 1; i<=n; i++){
	        printf("%d ", (i%2)?-1:1);
	    }
	    printf("\n");
	}
	return 0;
}

