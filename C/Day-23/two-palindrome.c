//https://www.codechef.com/problems/TWODIFFPALIN

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int a, b;
	    scanf("%d %d", &a, &b);
	    if ((a%2 && b%2) || a==1 || b==1)  printf("NO\n");
	    else printf("YES\n");
	}
	return 0;
}

