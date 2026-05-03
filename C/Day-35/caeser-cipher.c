//https://www.codechef.com/problems/CAESAR

#include <stdio.h>

int main() {
	int q;
	scanf("%d", &q);
	while(q--){
	    int n;
	    scanf("%d", &n);
	    char s[n+1], t[n+1], u[n+1];
	    scanf("%s", s);
	    scanf("%s", t);
	    scanf("%s", u);
	    int k = (t[0] - s[0] + 26)%26;
	    for (int i = 0; i<n; i++){
	        printf("%c", 'a'+(u[i]+k-'a')%26);
	    }
	    printf("\n");
	}
	return 0;
}

