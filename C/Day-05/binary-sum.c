#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, k;
	    scanf("%d %d", &n, &k);
	    if (n%2 == 0){
	        if (n/2 == k) printf("YES\n");
	        else printf("NO\n");
	    }else {
	        if ((n/2)+1 == k || n/2 == k) printf("YES\n");
	        else printf("NO\n");
	    }
	}
	return 0;
}

