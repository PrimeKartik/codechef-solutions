//https://www.codechef.com/problems/COOMILK

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, pos = 1, prev = 0;
	    scanf("%d", &n);
	    char s[8];
	    for (int i = 0; i<n; i++){
	        scanf("%s", s);
	        if (s[0] == 'c' && prev == 1){
	            pos = 0;
	        }
	        if (s[0] == 'm') prev = 0;
	        else prev = 1;
	    }
	    if (pos == 0 || s[0] == 'c') printf("NO\n");
	    else printf("YES\n");
	}
	return 0;
}

