#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
    	int x, h;
    	scanf("%d %d", &x, &h);
    	int i = 0;
    	while (h>0){
    	    if (i < 5) h -= x/2;
    	    else h -= x;
    	    i++;
    	}
    	printf("%d\n", i);
	}
	return 0;
}

