#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, k, x, diff = 0, ans = 0, found = 0;
	    scanf("%d %d", &n, &k);
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        diff = x - k + diff;
	        if (diff < 0 && !found){
	            ans = i+1; found = 1;
	        }
	    }
	    if (!ans){
	        printf("YES\n");
	    }else {
	        printf("NO %d\n", ans);
	    }
	}
	return 0;
}

