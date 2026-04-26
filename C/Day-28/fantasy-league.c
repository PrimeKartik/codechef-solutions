//https://www.codechef.com/problems/FFL

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, s;
	    scanf("%d %d", &n, &s);
	    int price[n], x, min1 = 101, min2 = 101;
	    for (int i = 0; i<n; i++){
	        scanf("%d", &price[i]);
	    }
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        if (x == 1 && min1 > price[i]) min1 = price[i];
	        if (x == 0 && min2 > price[i]) min2 = price[i];
	    }
	    if (s+min1+min2 <= 100) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

