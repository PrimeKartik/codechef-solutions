//https://www.codechef.com/START238D/problems/CRNET

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int x;
	    scanf("%d", &x);
	    if (x<21) printf("%d\n", x*10);
	    else printf("%d\n", ((x-20)/2)*5+200);
	}
	return 0;
}

