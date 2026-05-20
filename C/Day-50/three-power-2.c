//https://www.codechef.com/problems/THREEPOW2

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, count = 0;
	    scanf("%d", &n);
	    char s[200002];
	    scanf("%s", s);
	    if (strcmp(s, "1") == 0 || strcmp(s, "10") == 0){
	        printf("NO\n");
	        continue;
	    }
	    for (int i = 0; i<n; i++){
	        if (s[i] == '1') count++;
	    }
	    if (count <= 3) printf("YES\n");
	    else printf("NO\n");
	    
	}
	return 0;
}

