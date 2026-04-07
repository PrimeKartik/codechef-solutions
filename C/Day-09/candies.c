#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int a, b;
	    scanf("%d %d", &a, &b);
	    for (int i = 1;; i++){
	        if (a < 0 || b < 0) break;
	        if (i % 2 == 1) a -= i;
	        else b -= i;
	    }
	    if (a > b) printf("LIMAK\n");
	    else printf("BOB\n");
	}
	return 0;
}

