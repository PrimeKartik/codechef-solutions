#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int max = (n+1)/2;
	    int min = (n+2)/3;
	    printf("%d %d\n", max, min);
	}
	return 0;
}

