//https://www.codechef.com/problems/GMINEQ

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x, pos = 0, neg = 0, z;
	    scanf("%d", &n);
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        if (x == 1) pos++;
	        else neg++;
	    }
	    int diff = abs(pos-neg);;
	    if (n%4 == 2) z = 2;
	    else if (n%2 != 0) z = 1;
	    else z = 0;
	    
	    if (diff <= z) printf("YES\n");
	    else printf("NO\n");
	    
	}
	return 0;
}

