// https://www.codechef.com/problems/AIRM

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int hash[1440] = {0}, x;
	    for (int i = 0; i<2*n; i++){
	        scanf("%d", &x);
	        hash[x]++;
	    }
	    int ans = -1;
	    for (int i = 0; i<1440; i++){
	        if (ans < hash[i]){
	            ans = hash[i];
	        }
	    }
	    printf("%d\n", ans);
	}
	return 0;
}

