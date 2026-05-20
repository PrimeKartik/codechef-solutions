//https://www.codechef.com/problems/MD_RIEV

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    if (n<=4) printf("0 %d\n", n);
	    else printf("1 %d\n", n-1);
	}
	return 0;
}

