//https://www.codechef.com/problems/DAILY

#include <stdio.h>
int nCr(int n, int r){
    if (r>n) return 0;
    if (r == n || r == 0) return 1;
    
    int ans = 1;
    for (int i = 1; i<=r; i++){
        ans = ans * (n-i+1)/i;
    }
    return ans;
}

int main() {
	int x, n;
	scanf("%d %d", &x, &n);
	int ans = 0;
	while(n--){
	    char s[55];
	    scanf("%s", s);
	    for (int i = 0; i<9; i++){
	        int c = 0;
	        if (s[4*i] == '0') c++;
	        if (s[4*i+1] == '0') c++;
	        if (s[4*i+2] == '0') c++;
	        if (s[4*i+3] == '0') c++;
	        
	        if (s[53 - 2*i] == '0') c++;
	        if (s[52 - 2*i] == '0') c++;
	        
	        if (c >= x) ans += nCr(c, x);
	    }
	    
	}
	printf("%d", ans);
    return 0;
}

