//https://www.codechef.com/problems/EVMHACK

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int a, b, c, p, q, r;
	    scanf("%d %d %d %d %d %d", &a, &b, &c, &p, &q, &r);
	    int total = p+q+r;
	    int favour = a+b+c;
	    int max_favour = ( p+b+c > q+a+c ) ? (p+b+c) : q+a+c;
	    max_favour = (max_favour > r+a+b) ? max_favour : r+a+b;
	    if (max_favour > total/2) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

