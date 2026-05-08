//https://www.codechef.com/problems/CLOSEVOWEL

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x = 1;
	    scanf("%d", &n);
	    char s[n+1];
	    scanf("%s", s);
	    for (int i = 0; i<n; i++){
	        if (s[i] == 'c' || s[i] == 'g' || s[i] == 'l' || s[i] == 'r') 
	        x=(x*2)%1000000007;
	    }
	    printf("%d\n", x);
	}
	return 0;
}

