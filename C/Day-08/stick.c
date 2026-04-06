#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x;
	    scanf("%d %d", &n, &x);
	    if (n%2 && !(x%2)){
	        printf("NO\n");
	    }else {
	        printf("YES\n");
	    }
	}
	return 0;
}

