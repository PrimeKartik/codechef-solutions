//https://www.codechef.com/problems/RATIO2

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int x, y;
	    scanf("%d %d", &x, &y);
	    int min = (x<y)?x:y;
	    int max = (x>y)?x:y;
	    if (max >= 2*min) printf("0\n");
	    else printf("%d\n", min-(max/2));
	}
	return 0;
}

