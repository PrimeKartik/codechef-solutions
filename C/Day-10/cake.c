#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if (n < 5){
	    printf("%d", 100 * n);
	}else {
	    printf("%d", 85 * n);
	}
	return 0;
}

