//https://www.codechef.com/problems/DIVAB

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int a, b, n, found = 0, ans = 0;
	    scanf("%d %d %d", &a, &b, &n);
	    if (a%b == 0) ans = -1;
	    else {
    	    if (n%a == 0) ans = n;
    	    else ans = n+(a-(n%a));
    	    
    	    if (ans%b == 0) ans +=a;
	    }
	    printf("%d\n", ans);
	}
	return 0;
}

