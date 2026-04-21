// https://www.codechef.com/problems/SINGLEOP1

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, y = 0;
	    scanf("%d", &n);
	    char s[n+1];
	    scanf("%s", s);
	    for (int i = 0; i<n; i++){
	        if (s[i] == '1') y++;
	        else break;
	    }
	    printf("%d\n", y);
	}
	return 0;
}

