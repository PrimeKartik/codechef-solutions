//https://www.codechef.com/problems/CNOTE

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int x, y, k, n, flag = 0;
	    scanf("%d %d %d %d", &x, &y, &k, &n);
	    int req = x - y;
	    for (int i = 0; i<n; i++){
	        int pages, cost;
	        scanf("%d %d", &pages, &cost);
	        if (k >= cost && req <= pages) flag = 1;
	    }
	    if (flag) printf("LuckyChef\n");
	    else printf("UnluckyChef\n");
	}
	return 0;
}

