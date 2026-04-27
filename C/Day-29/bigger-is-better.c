//https://www.codechef.com/problems/BIGNAME

#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    char s1[n+1], s2[n+1];
	    scanf("%s", s1);
	    for (int i = 0; i<n; i++){
	        s2[i] = 'z';
	    }
	    s2[n] = '\0';
	    if (strcmp(s1, s2) == 0) printf("-1\n");
	    else printf("%s\n", s2);
	}
	return 0;
}

