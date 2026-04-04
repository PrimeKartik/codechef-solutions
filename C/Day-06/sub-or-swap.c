#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int x, y;
	    scanf("%d %d", &x, &y);
	    while (x != 0){
	        int temp = x;
	        x = y % x;
	        y = temp;
	    }
	    printf("%d\n", y);
	}
	return 0;
}

