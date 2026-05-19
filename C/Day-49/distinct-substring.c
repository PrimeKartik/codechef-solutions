//https://www.codechef.com/problems/DISTSUB

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, k;
	    scanf("%d %d", &n, &k);
	    int need = k*(k+1)/2 + (k-1);
	    if (n >= need) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

