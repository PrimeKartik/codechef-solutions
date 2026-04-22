//https://www.codechef.com/START235D/problems/P2235

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, pos = 1;
	    scanf("%d", &n);
	    char s[n+1];
	    scanf("%s", s);
	    for (int i = 0; i<(n+1)/2; i++){
	        if (s[i] == '?' && s[n-i-1] == '?'){
	            pos = 0;
	        }
	    }
	    if (pos) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

