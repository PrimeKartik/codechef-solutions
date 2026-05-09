//https://www.codechef.com/problems/HOWMANYMAX

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, count = 0;
	    scanf("%d", &n);
	    char s[n+1];
	    scanf("%s", s);
	    char prev = '0';
	    for (int i = 0; i<n-1; i++){
	        if (prev == '0' && s[i] == '1') count++;
	        prev = s[i];
	    }
	    if (prev == '0') count++;
	    printf("%d\n", count);
	}
	return 0;
}

